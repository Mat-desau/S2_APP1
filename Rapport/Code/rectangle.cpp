/********
 * Fichier: rectangle.cpp
 * Auteurs: Vincent Kilanowski & Mathieu Desautels
 * Date: 10 janvier 2023 (creation)
 * Description: Rectangle
 ********/
#include "rectangle.h"

Rectangle::Rectangle(int thauteur, int tlargeur)
{
	if (thauteur > 0)
	{
		hauteur = thauteur;
	}
	if (tlargeur > 0)
	{
		largeur = tlargeur;
	}
}

Rectangle::Rectangle(int thauteur, int tlargeur, int x, int y) : Forme(x, y)
{
	if (thauteur > 0)
	{
		hauteur = thauteur;
	}
	if (tlargeur > 0)
	{
		largeur = tlargeur;
	}
}

Rectangle::~Rectangle()
{
}

void Rectangle::setHauteur(int thauteur)
{
	if (thauteur > 0)
	{
		hauteur = thauteur;
	}
}

int Rectangle::getHauteur()
{
	return hauteur;
}

void Rectangle::setLargeur(int tlargeur)
{
	if (tlargeur > 0)
	{
		largeur = tlargeur;
	}
}

int Rectangle::getLargeur()
{
	return largeur;
}

double Rectangle::aire()
{
	return (double)largeur * hauteur;
}

void Rectangle::afficher(ostream &s)
{
	s << "Rectangle (x=" << getAncrage().x << ", y=" << getAncrage().y << ", l=" << largeur << ", h=" << hauteur << ", aire=" << aire() << ")\n";
}
