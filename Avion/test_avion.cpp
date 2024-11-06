#include <iostream>
#include <string>
#include <sstream>

#define OK 0
#define ERREUR 1

#define NEW '\n'
#define PI 3.14159

using namespace std;

int factorielle(int a);
int imprimer_valeur(float valeur);
int imprimer_string(string mots);
int aire_cercle(float &aire);

//Lorsque le code est toute ok retourne 0 
//Si le code a un erreur retourne 1

//Classes
//private, public, protected
class CRectangle{
        int x, y;
    public:
        void set_values(int,int);
        int area() {return (x*y);};
};

void CRectangle :: set_values (int a , int b){
    x = a;
    y = b;
}

//avec destruccteur
class CSquare{
        int *x, *y;
    public:
        CSquare (int,int);
        ~CSquare();
        int area() {return (*x * *y);};
};

CSquare :: CSquare (int a, int b){
    x = new int;
    y = new int;
    *x = a;
    *y = b;
}

CSquare :: ~CSquare(){
    delete x;
    delete y;
} 

//classe avec un overload de constructeur
class Rec{
    int width, height;
    public:
        Rec();
        Rec(int, int);
        int area() {return(width*height);};
};

Rec :: Rec(int a, int b){
    width = a;
    height = b;
}

Rec :: Rec(){
    width = 7;
    height = 10;
}

int main(){
//Déclaration des variables
    int a = 0, b = 0, c = 0, resultat = 0;
    float z = 0, w = 0;
    int largeur = 0, hauteur = 0;
    char fonction;
    int countdown = 10;
    float aire_finale = 0, nombre = 0;
    char mot[] = "Salut";
    string string_nombre;
    
    a = b = c = 1;

//La valeur c sera changer pour le deuxième terme si faux et pour le premier si vrai
//ici il compare a avec b (qui sont égale à la ligne plus haute)
//puisqu'ils sont vrai cela assigne b à 20
//il réaasigne la valeur de b selon sa réponse
    b = (a==b) ? 20 : 30;

//ici il assigne la valeur de a à 10
//il assigne la valeur de c au résultat
    c = (a=10, b+a);

//Print du code
    cout << endl;
    cout << "Valeur de a : ";
    imprimer_valeur(a);
    cout << "Valeur de b : ";
    imprimer_valeur(b);
    cout << "Valeur de c : ";
    imprimer_valeur(c);

//Print de valeur 1 utilisant fonction imprimer valeur
    cout << "Valeur a+b+c : ";
    resultat = a + b + c;
    imprimer_valeur(resultat);

//Changement de la valeur et utilisation de la fonction imprimer valeur
    cout << "Valeur a+b : ";  
    resultat = a + b;
    imprimer_valeur(resultat);

//impression d'une string en utilisant la fonction
    cout << "Variable de mot : ";
    imprimer_string(mot); 

//imprimer valeur de la longueur de la string mot
    cout << "Valeur de la longueur de la string : ";
    imprimer_valeur(sizeof(mot));

//Recherche aire d'un cercle
    //aire_cercle(aire_finale);
    //cout << "Aire du cercle : " << imprimer_valeur(aire_finale);

//forcer à le mettre en int
    //aire_cercle(aire_finale);
    //imprimer_valeur(int(aire_finale));

//Convertissage d'une string à un chiffre
    cout << "Ecrire un chiffre : ";
    //getline(cin, string_nombre);
    //stringstream(string_nombre) >> nombre;
    cout << endl << "Valeur de ce chiffre fois 2 (x2) : " << nombre * 2 << endl << endl;

//Petite boucle pour lancement de missile
    cout << "Normal : ";
    while(countdown > 0){
        cout << countdown << ", ";
        countdown -= 1;  
    }
    if(countdown == 0)
        cout << "FEU!";
    cout << endl << endl;
    countdown = 10;

//ajout d'un break a 5
    cout << "Avec break à 5 : ";
    while(countdown > 0){
        if(countdown == 5){
            cout << "Fonction arrêter";
            break;
        }
        cout << countdown << ", ";
        countdown -= 1;  
    }
    if(countdown == 0)
        cout << "FEU!";
    cout << endl << endl;
    countdown = 10;

//ajout d'un continue a 5
    cout << "Avec continue à 5 : ";
    while(countdown > 0){
        if(countdown == 5){
            countdown -= 1;
            continue;
        }
        cout << countdown << ", ";
        countdown -= 1;  
    }
    if(countdown == 0)
        cout << "FEU!";
    cout << endl << endl;
    countdown = 10;

/*//Essai d'un switch case
    cout << "Valeur du premier chiffre : ";
    //cin >> z;
    cout << "Valeur du deuxieme chiffre : ";
    //cin >> w;
    cout << "Fonction à faire : \n\tm = multiplication\n\td = division\n\ta = addition\n\ts = soustraction" << endl;
    cout << "Votre choix : ";
    //cin >> fonction;

    switch(fonction){
        case 'm':
            resultat = z * w;
            break;
        case 'd':
            resultat = z / w;
            break;
        case 'a':
            resultat = z + w;
            break;
        case 's':
            resultat = z - w;
            break;
    }
    cout << "Reponse : ";
    imprimer_valeur(resultat);*/

    cout << "Factorielle de 5 : " << factorielle(9) << endl << endl;

//manipulation de classes
    cout << "Création d'une classe de rectangle avec 5 rectangles différents" << endl ;
    CRectangle rect1, rect2, rect3, rect4, rect5;
    /*for(int e = 1; e <= 5; e++){
        int a = 0, b = 0;

        cout << "Entrer la valeur de x pour le " << e << " rectangle ";
        cin >> a;
        cout << "Entrer la valeur de y pour le " << e << " rectangle ";
        cin >> b;
        switch(e){
            case 1:
                rect1.set_values(a,b);
                cout << "Aire : " << rect1.area() << endl << endl; 
                break; 
            case 2:
                rect2.set_values(a,b);
                cout << "Aire : " << rect2.area() << endl << endl;
                break;
            case 3:
                rect3.set_values(a,b);
                cout << "Aire : " << rect3.area() << endl << endl;
                break;
            case 4:
                rect4.set_values(a,b);
                cout << "Aire : " << rect4.area() << endl << endl;
                break;
            case 5:
                rect5.set_values(a,b);
                cout << "Aire : " << rect5.area() << endl << endl;
                break;
        }
    }*/


//autre façon de faire un objet
    cout << "Entrer la valeur de x pour le rectangle : ";
    cin >> largeur;
    cout << "Entrer la valeur de y pour le rectangle : ";
    cin >> hauteur;

    Rec rec1(largeur,hauteur);
    cout << "Valeur du cube : " << rec1.area() << endl << endl;
    Rec rec2;
    cout << "Valeur du cube sans entree : " << rec2.area() << endl << endl;



    return OK;
}


/// @brief Pour imprimer valeur avec deux lignes d'espaces
/// @param valeur
/// @return 0
int imprimer_valeur(float valeur){
    cout << valeur << endl << endl;
    return OK;
}

/// @brief Pour imprimer string avec deux lignes d'espaces
/// @param string 
/// @return 0
int imprimer_string(string mots){
    cout << mots << endl << endl;
    return OK;
}

/// @brief Demande l'aire du cercle et retourne l'aire sous le pointeur en paramètre
/// @param 
/// @return aire
int aire_cercle(float &aire){
    float rayon = 0, diametre = 0;
    char lettre;

    cout << "Entrer d pour diamètre ou r pour rayon : " ;
    cin >> lettre;
    cout << "Entrer la valeur selon l'option choisi : " ;
    (lettre == 'r') ? (cin >> rayon) : (cin >> diametre);

    if(diametre != 0)
        rayon = diametre / 2;

    aire = (PI) * (rayon) * (2);

    return OK;
}

/// @brief Prends en paramètre la valeur de la factorielle à vérifier
/// @param valeur 
/// @return valeur de factorielle
int factorielle(int a){
    int resultat = 1;
    for(int x = 1; x <= a; x++){
        resultat = resultat * x;
    }
    return resultat;
}


