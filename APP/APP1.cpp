#include <iostream>
#include <string>

using std::cout;
using std::endl;

#define PI 3.14159

/// @brief structure utiliser pour les points d'ancrarages des formes (x,y) lieu ancrage (l) largeur (h) hauteur (r) rayon
struct Coordonnee{
    //Coordonnées du point d'ancrage
    int x;
    int y;
    //Dimensions
};

class Couche{
    int *etage;
    public:
        Couche(int);
        ~Couche();
};

/// @brief Claasse public dans toute les autres classes
class Forme
{
    public:
        Forme();
        Forme(int);
        ~Forme();
};

//Toute les codes pour les rectangles
/// @brief (Rectangle(x,y) - dimensions(largeur,hauteur) - aire()) - (point d'ancrage est le coin inférieur gauche)
class Rectangle: public Forme{
    struct Coordonnee *point_ancrage_rectangle;
    int *largeur, *hauteur;

    public:
        Rectangle();
        Rectangle(int, int);
        void dimension(int, int);
        int aire();
        void imprimer();
        ~Rectangle();
        //int ancrage_x() {return(point_ancrage_rectangle.x);};
        //int ancrage_y() {return(point_ancrage_rectangle.y);};
};


//Toute les codes pour les carres
/// @brief (Carre(x,y) - dimensions(largeur) - aire()) - (point d'ancrage est le coin inférieur gauche)
class Carre: public Forme{
    struct Coordonnee *point_ancrage_carre;
    int *cote;

    public:
        Carre();
        Carre(int, int);
        void dimension(int);
        int aire();
        void imprimer();
        ~Carre();
        //int ancrage_x() {return(point_ancrage_carre.x);};
        //int ancrage_y() {return(point_ancrage_carre.y);};
};


//Toute les codes pour les cercles
/// @brief (Cercle(x,y) - dimensions(rayon) - aire()) - (point d'ancrage est le centre)
class Cercle: public Forme{
    struct Coordonnee *point_ancrage_cercle;
    int *rayon;
    
    public:
        Cercle();
        Cercle(int, int);
        void dimension(int);
        float aire();
        void imprimer();
        ~Cercle();
        //int ancrage_x() {return(point_ancrage_cercle.x);};
        //int ancrage_y() {return(point_ancrage_cercle.y);};
};


//Sans initialistion
Forme :: Forme(){

}

Rectangle :: Rectangle(){
    point_ancrage_rectangle->x = 0;
    point_ancrage_rectangle->y = 0;
}

Carre :: Carre(){
    point_ancrage_carre->x = 0;
    point_ancrage_carre->y = 0;
}

Cercle :: Cercle(){
    point_ancrage_cercle->x = 0;
    point_ancrage_cercle->y = 0;
}


//Avec initialisation
Couche :: Couche(int a){
    etage = new int;
    *etage = a; 
    cout << " ---- Couche " << a << endl;
}

Forme :: Forme(int x){
    
}

Rectangle :: Rectangle(int x, int y){
    point_ancrage_rectangle = new Coordonnee;
    point_ancrage_rectangle->x = x;
    point_ancrage_rectangle->y = y;
    
}

Carre :: Carre(int x, int y){
    point_ancrage_carre = new Coordonnee;
    point_ancrage_carre->x = x;
    point_ancrage_carre->y = y;

}

Cercle :: Cercle(int x, int y){
    point_ancrage_cercle = new Coordonnee;
    point_ancrage_cercle->x = x;
    point_ancrage_cercle->y = y;
}


//Dimensons
void Rectangle :: dimension(int l, int h){
    largeur = new int;
    hauteur = new int;
    *largeur = l;
    *hauteur = h;
}

void Carre :: dimension (int l){
    cote = new int;
    *cote = l;
}

void Cercle :: dimension(int r){
    rayon = new int;
    *rayon = r;
    
}


//Destructeus
Couche :: ~Couche(){
    //delete etage;
    cout<<"Destrruction etage" << endl ;
}

Forme :: ~Forme(){
    cout<<"Destrruction Forme" << endl ;
}

Rectangle :: ~Rectangle(){
    delete point_ancrage_rectangle;
    cout<<"Destrruction Rectangle" << endl ;
}

Carre :: ~Carre(){
    delete point_ancrage_carre;
    cout<<"Destrruction Carrer" << endl ;
}

Cercle :: ~Cercle(){
    delete point_ancrage_cercle;
    cout<<"Destrruction Cercle" << endl;
}


//Aire
int Rectangle :: aire(){
    int aire;
    aire = (*largeur) * (*hauteur);
    return aire;
}

int Carre :: aire(){
    int aire;
    aire = (*cote) * (*cote);
    return aire;
}

float Cercle :: aire(){
    float aire;
    aire = 2 * PI * (*rayon);
    return aire; 
}



//Imprimer
void Rectangle :: imprimer(){
    cout << "Rectangle (x=" << point_ancrage_rectangle->x << ", y=" << point_ancrage_rectangle->y << ", l=" << *largeur << ", h=" << *hauteur << ", aire=" << aire() << ")" << endl;
}

void Carre :: imprimer(){
    cout << "Carre (x=" << point_ancrage_carre->x << ", y=" << point_ancrage_carre->y << ", c=" << *cote << ", aire=" << aire() << ")" << endl;
}

void Cercle :: imprimer(){
    cout << "Cercle (x=" << point_ancrage_cercle->x << ", y=" << point_ancrage_cercle->y << ", r=" << *rayon << ", aire=" << aire() << ")" << endl;
}


int main(){

//Première étaape couche
//deuxième étape efface les ancienne formes
//troiisième étape étapee verifier chaque forme
//quatrième étapee imprimer les commaandes apprroprié
//cinquièmee étape effacer eet recommencer


for( int f = 0; f<5 ; f++ ){
    Couche Couche(f);
}

cout << endl ; 

Rectangle Rec(2,2);
Rec.dimension(5,5);
Rec.imprimer();

Carre Car;
Car.dimension(20);
Car.imprimer();

Cercle Cer(30,5);
Cer.dimension(5);
Cer.imprimer();

cout<< Rec.aire() <<endl;

cout << endl ; 
Rec = Rectangle(10,10);
cout<< Rec.aire() <<endl;
cout << endl ; 

Rec.dimension(20,3);
Rec.imprimer();

cout << endl ; 
Car = Carre(10,10);
cout << endl ; 

Car.dimension(20);
Car.imprimer();

cout << endl ; 

Cer = Cercle(2,2);
cout << endl ; 

Cer.dimension(5);
Cer.imprimer();

cout << endl ; 

    return 0;
}