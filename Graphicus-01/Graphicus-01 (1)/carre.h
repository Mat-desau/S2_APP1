#ifndef CARRE_H
#define CARRE_H

#include <iostream>
#include "forme.h"

//Toute les codes pour les carres
/// @brief (Carre(x,y) - dimensions(largeur) - aire()) - (point d'ancrage est le coin inférieur gauche)
class Carre: public Forme{
    struct Coordonnee *point_ancrage_carre;
    int *cote;

    public:
        Carre();
        Carre(int, int);
        void dimension(int);
        //int aire();
        void imprimer();
        ~Carre();
        //int ancrage_x() {return(point_ancrage_carre.x);};
        //int ancrage_y() {return(point_ancrage_carre.y);};
};

#endif
