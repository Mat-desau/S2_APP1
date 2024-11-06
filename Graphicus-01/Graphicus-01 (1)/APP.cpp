#include <iostream>
#include <string>

using std::cout;
using std::endl;



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








//Sans initialistion
Forme :: Forme(){

}







//Avec initialisation
Couche :: Couche(int a){
    etage = new int;
    *etage = a; 
    cout << " ---- Couche " << a << endl;
}

Forme :: Forme(int x){
    
}







//Dimensons







//Destructeus
Couche :: ~Couche(){
    //delete etage;
    cout<<"Destrruction etage" << endl ;
}

Forme :: ~Forme(){
    cout<<"Destrruction Forme" << endl ;
}








//Aire








//Imprimer






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
