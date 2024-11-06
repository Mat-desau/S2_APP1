/********
 * Fichier: carre.h
 * Auteurs: Vincent Kilanowski & Mathieu Desautels
 * Date: 10 janvier 2023 (creation)
 * Description: Carre
 ********/
#ifndef CARRE_H
#define CARRE_H

#include <iostream>
#include "forme.h"

// Toute les codes pour les carres
/// @brief (Carre(x,y) - dimensions(largeur) - aire()) - (point d'ancrage est le coin inférieur gauche)
class Carre : public Forme
{
private:
    int cote = 1;

public:
    //
    Carre(int tcote);
    Carre(int tcote, int x, int y);
    ~Carre();
    //
    void setCote(int tCote);
    int getCote();
    //
    double aire();
    void afficher(ostream &s);
};

#endif
