/********
 * Fichier: vecteur.h
 * Auteurs: Vincent Kilanowski & Mathieu Desautels
 * Date: 10 janvier 2023 (creation)
 * Description: Les vecteurs de forme*
 ********/
#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>
#include "forme.h"

class Vecteur
{
private:
	Forme **pvecteur = new Forme *[1];
	int taille;
	int capacite;

public:
	Vecteur();
	~Vecteur();
	//
	int getCapacite();
	int getTaille();
	bool add(Forme *tforme);
	Forme *remove(int index);
	Forme *getForme(int index);
	void clear();
	bool isVide();
	void afficher(ostream &s);
};
#endif
