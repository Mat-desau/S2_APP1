/********
 * Fichier: vecteur.cpp
 * Auteurs: Vincent Kilanowski & Mathieu Desautels
 * Date: 10 janvier 2023 (creation)
 * Description: Les vecteurs de forme*
 ********/

#include "vecteur.h"

Vecteur::Vecteur()
{
	capacite = 1;
	taille = 0;
}

Vecteur::~Vecteur()
{
}

int Vecteur::getCapacite()
{
	return capacite;
}

int Vecteur::getTaille()
{
	return taille;
}

bool Vecteur::add(Forme *tforme)
{
	if (tforme == NULL)
	{
		return false;
	}
	if (taille == capacite)
	{
		// faire x2
		capacite = capacite * 2;
		Forme **vecteurTemp = new Forme *[capacite];

		for (int i = 0; i < capacite / 2; i++)
		{
			vecteurTemp[i] = pvecteur[i];
		}
		delete pvecteur;
		pvecteur = vecteurTemp;
	}
	pvecteur[taille] = tforme;
	taille++;
	return true;
}

Forme *Vecteur::remove(int index)
{
	if (index <= taille - 1)
	{
		Forme *temp;
		temp = pvecteur[index];
		for (int i = index; i < capacite - 1; i++)
		{
			pvecteur[i] = pvecteur[i + 1];
		}
		pvecteur[capacite] = NULL;
		taille--;
		return temp;
	}
	return NULL;
}

Forme *Vecteur::getForme(int index)
{
	if (index <= taille - 1)
	{
		return pvecteur[index];
	}
	else
	{
		return NULL;
	}
}

void Vecteur::clear()
{
	for (int i = 0; i < taille; i++)
	{
		delete pvecteur[i];
	}
	taille = 0;
	capacite = 1;
	Forme **vecteurTemp = new Forme *[1];
	delete pvecteur;
	pvecteur = vecteurTemp;
}

bool Vecteur::isVide()
{
	if (taille == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Vecteur::afficher(ostream &s)
{
	for (int i = 0; i < taille; i++)
	{
		pvecteur[i]->afficher(s);
	}
}
