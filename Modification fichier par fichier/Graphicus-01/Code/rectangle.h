/********
 * Fichier: rectangle.h
 * Auteurs: Vincent Kilanowski & Mathieu Desautels
 * Date: 10 janvier 2023 (creation)
 * Description: Rectangle
 ********/
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "forme.h"

class Rectangle : public Forme
{
private:
	int largeur = 1;
	int hauteur = 1;

public:
	//
	Rectangle(int thauteur, int tlargeur);
	Rectangle(int thauteur, int tlargeur, int x, int y);
	~Rectangle();
	//
	void setHauteur(int thauteur);
	int getHauteur();
	void setLargeur(int tlargeur);
	int getLargeur();
	//
	double aire();
	void afficher(ostream &s);
};

#endif
