/********
 * Fichier: carre.cpp
 * Auteurs: Vincent Kilanowski & Mathieu Desautels
 * Date: 10 janvier 2023 (creation)
 * Description: Carre
 ********/
#include "carre.h"

Carre::Carre(int tcote)
{
	if (tcote > 0)
	{
		cote = tcote;
	}
}

Carre::Carre(int tcote, int x, int y) : Forme(x, y)
{
	if (tcote > 0)
	{
		cote = tcote;
	}
}

Carre::~Carre()
{
}

void Carre::setCote(int tcote)
{
	if (tcote > 0)
	{
		cote = tcote;
	}
}

int Carre::getCote()
{
	return cote;
}

double Carre::aire()
{
	return (double)(cote * cote);
}

void Carre::afficher(ostream &s)
{
	s << "Carre (x=" << getAncrage().x << ", y=" << getAncrage().y << ", c=" << cote << ", aire=" << aire() << ")\n";
}
