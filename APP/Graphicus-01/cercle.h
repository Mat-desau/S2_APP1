#ifndef CERCLE_H
#define CERCLE_H

#include <iostream>
#include "forme.h"

//Toute les codes pour les cercles
/// @brief (Cercle(x,y) - dimensions(rayon) - aire()) - (point d'ancrage est le centre)
class Cercle: public Forme{
    struct Coordonnee *point_ancrage_cercle;
    int *rayon;
    
    public:
        Cercle();
        Cercle(int, int);
        void dimension(int);
        //float aire();
        void imprimer();
        ~Cercle();
        //int ancrage_x() {return(point_ancrage_cercle.x);};
        //int ancrage_y() {return(point_ancrage_cercle.y);};
};


#endif
