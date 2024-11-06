/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet : Modifier par (Vincent Kilanowski & Mathieu Desautels)
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"

Couche::Couche(){
}

Couche::~Couche(){

}

double Couche::aire(){
	double aire = 0.0;
	if(vecteur.isVide() || etat == 1){
		return aire;
	}else{
		for(int i = 0; i < vecteur.getTaille(); i++){
			aire = aire + vecteur.getForme(i)->aire();
		}	
	}
	return aire;
}

bool Couche::renitialiser(){
	vecteur.clear();
	etat = 1;
	return true;
}

Forme* Couche::getForme(int index){
	return vecteur.getForme(index);
}

bool Couche::addForme(Forme* tforme){
	if(etat == 2){
		if(vecteur.add(tforme)){
			return true;
		}
	}
	return false;
}

Forme* Couche::removeForme(int index){
	if(etat == 2){
		return vecteur.remove(index);
	}
	return NULL;
}

bool Couche::setEtat(int tetat){
	if(tetat == 1 || tetat>3){
		return false;
	}
	etat = tetat;
	return true;
}

bool Couche::translater(int deltaX, int deltaY){
	if(vecteur.isVide() || etat != 2){
		return false;
	}
	for(int i = 0; i < vecteur.getTaille(); i++){
		vecteur.getForme(i)->translater(deltaX, deltaY);
	}
	return true;
}

void Couche::afficher(ostream & s){
	if(vecteur.isVide()){
		s << "Couche initialisee\n";
	}else{
		vecteur.afficher(cout);
	}
}


