#include "carre.h"

Carre :: Carre(){
    point_ancrage_carre->x = 0;
    point_ancrage_carre->y = 0;
}

Carre :: Carre(int x, int y){
    point_ancrage_carre = new Coordonnee;
    point_ancrage_carre->x = x;
    point_ancrage_carre->y = y;

}

void Carre :: dimension (int l){
    cote = new int;
    *cote = l;
}

Carre :: ~Carre(){
    delete point_ancrage_carre;
    cout<<"Destrruction Carrer" << endl ;
}

/*int Carre :: aire(){
    int aire;
    aire = (*cote) * (*cote);
    return aire;
}*/

void Carre :: imprimer(){
    cout << "Carre (x=" << point_ancrage_carre->x << ", y=" << point_ancrage_carre->y << ", c=" << *cote << ", aire=" << aire() << ")" << endl;
}
