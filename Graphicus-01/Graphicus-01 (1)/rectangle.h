#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "forme.h"

//Toute les codes pour les rectangles
/// @brief (Rectangle(x,y) - dimensions(largeur,hauteur) - aire()) - (point d'ancrage est le coin inférieur gauche)
class Rectangle: public Forme{
    struct Coordonnee *point_ancrage_rectangle;
    int *largeur, *hauteur;

    public:
        Rectangle();
        Rectangle(int, int);
        void dimension(int, int);
        //int aire();
        void imprimer();
        ~Rectangle();
        //int ancrage_x() {return(point_ancrage_rectangle.x);};
        //int ancrage_y() {return(point_ancrage_rectangle.y);};
};

#endif
