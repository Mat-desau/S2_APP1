/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet : Modifier par (Vincent Kilanowski & Mathieu Desautels)
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
 ********/

#ifndef COUCHE_H
#define COUCHE_H

#include "vecteur.h"

class Couche
{
private:
	Vecteur vecteur;
	int etat = 1; // 1=initialise 2=active 3=inactive
public:
	Couche();
	~Couche();

	double aire();
	void afficher(ostream &s);
	bool renitialiser();
	bool translater(int deltaX, int deltaY);
	Forme *getForme(int index);
	bool addForme(Forme *tforme);
	Forme *removeForme(int index);
	bool setEtat(int tetat);
};

#endif
