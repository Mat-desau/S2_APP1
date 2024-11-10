#include "rectangle.h"

Rectangle :: Rectangle(){
    point_ancrage_rectangle->x = 0;
    point_ancrage_rectangle->y = 0;
}

Rectangle :: Rectangle(int x, int y){
    point_ancrage_rectangle = new Coordonnee;
    point_ancrage_rectangle->x = x;
    point_ancrage_rectangle->y = y;
    
}

void Rectangle :: dimension(int l, int h){
    largeur = new int;
    hauteur = new int;
    *largeur = l;
    *hauteur = h;
}

Rectangle :: ~Rectangle(){
    delete point_ancrage_rectangle;
    cout<<"Destrruction Rectangle" << endl ;
}

/*int Rectangle :: aire(){
    int aire;
    aire = (*largeur) * (*hauteur);
    return aire;
}*/

void Rectangle :: imprimer(){
    cout << "Rectangle (x=" << point_ancrage_rectangle->x << ", y=" << point_ancrage_rectangle->y << ", l=" << *largeur << ", h=" << *hauteur << ", aire=" << aire() << ")" << endl;
}

