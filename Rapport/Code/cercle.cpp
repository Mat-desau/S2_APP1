/********
 * Fichier: cercle.cpp
 * Auteurs: Vincent Kilanowski & Mathieu Desautels
 * Date: 10 janvier 2023 (creation)
 * Description: Cercle
 ********/
#include "cercle.h"

Cercle::Cercle(int trayon)
{
	if (trayon > 0)
	{
		rayon = trayon;
	}
}

Cercle::Cercle(int trayon, int x, int y) : Forme(x, y)
{
	if (trayon > 0)
	{
		rayon = trayon;
	}
}

Cercle::~Cercle()
{
}

void Cercle::setRayon(int trayon)
{
	if (trayon > 0)
	{
		rayon = trayon;
	}
}

int Cercle::getRayon()
{
	return rayon;
}

double Cercle::aire()
{
	return (double)(2 * PI * (rayon));
}

void Cercle::afficher(ostream &s)
{
	s << "Cercle (x=" << getAncrage().x << ", y=" << getAncrage().y << ", r=" << rayon << ", aire=" << aire() << ")\n";
}
