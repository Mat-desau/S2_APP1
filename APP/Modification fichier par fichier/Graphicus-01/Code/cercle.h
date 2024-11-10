/********
 * Fichier: cercle.h
 * Auteurs: Vincent Kilanowski & Mathieu Desautels
 * Date: 10 janvier 2023 (creation)
 * Description: Cercle
 ********/
#ifndef CERCLE_H
#define CERCLE_H

#include <iostream>
#include "forme.h"

#define PI 3.14159

// Toute les codes pour les cercles
/// @brief (Cercle(x,y) - dimensions(rayon) - aire()) - (point d'ancrage est le centre)

class Cercle : public Forme
{
private:
	int rayon = 1;

public:
	//
	Cercle(int trayon);
	Cercle(int trayon, int x, int y);
	~Cercle();
	//
	void setRayon(int trayon);
	int getRayon();
	//
	double aire();
	void afficher(ostream &s);
};

#endif
