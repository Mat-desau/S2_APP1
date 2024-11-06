#include "cercle.h"

Cercle :: Cercle(){
    point_ancrage_cercle->x = 0;
    point_ancrage_cercle->y = 0;
}

Cercle :: Cercle(int x, int y){
    point_ancrage_cercle = new Coordonnee;
    point_ancrage_cercle->x = x;
    point_ancrage_cercle->y = y;
}

void Cercle :: dimension(int r){
    rayon = new int;
    *rayon = r;   
}

Cercle :: ~Cercle(){
    delete point_ancrage_cercle;
    cout<<"Destrruction Cercle" << endl;
}

/*float Cercle :: aire(){
    float aire;
    aire = 2 * PI * (*rayon);
    return aire; 
}*/

void Cercle :: imprimer(){
    cout << "Cercle (x=" << point_ancrage_cercle->x << ", y=" << point_ancrage_cercle->y << ", r=" << *rayon << ", aire=" << aire() << ")" << endl;
}
