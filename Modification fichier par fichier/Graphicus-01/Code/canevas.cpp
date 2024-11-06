/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet : Modifier par (Vincent Kilanowski & Mathieu Desautels)
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
 ********/

#include "canevas.h"

Canevas::Canevas()
{
	for (int i = 0; i < MAX_COUCHES; i++)
	{
		Couche couche;
		couches[i] = couche;
	}
	couches[0].setEtat(2);
}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
	for (int i = 0; i < MAX_COUCHES; i++)
	{
		couches[i].renitialiser();
	}
	couche_active = 0;
	return couches[0].setEtat(2);
}

bool Canevas::activerCouche(int index)
{
	if (couche_active == index)
	{
		return true;
	}
	if (index >= MAX_COUCHES || !couches[couche_active].setEtat(3) || !couches[index].setEtat(2))
	{
		return false;
	}
	couche_active = index;
	return true;
}

bool Canevas::cacherCouche(int index)
{
	return couches[index].setEtat(3);
}

bool Canevas::ajouterForme(Forme *p_forme)
{
	return couches[couche_active].addForme(p_forme);
}

bool Canevas::retirerForme(int index)
{
	if (couches[couche_active].removeForme(index) != NULL)
	{
		return true;
	}
	return false;
}

double Canevas::aire()
{
	double aire = 0.0;
	for (int i = 0; i < MAX_COUCHES; i++)
	{
		aire += couches[i].aire();
	}
	return aire;
}

bool Canevas::translater(int deltaX, int deltaY)
{
	return couches[couche_active].translater(deltaX, deltaY);
}

void Canevas::afficher(ostream &s)
{
	for (int index = 0; index < MAX_COUCHES; index++)
	{
		cout << "----- Couche " << index << "\n";
		couches[index].afficher(s);
	}
}
