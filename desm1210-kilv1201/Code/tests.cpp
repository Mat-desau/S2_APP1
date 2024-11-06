/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet : Modifier par (Vincent Kilanowski & Mathieu Desautels)
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests.
 *    Ce fichier fait partie de la distribution de Graphicus.
 ********/

#include "tests.h"

void Tests::tests_unitaires_formes()
{
	// Tests sur les formes geometriques
	cout << "---- TEST FORME ---- \n";
	Coordonnee c1;
	c1.x = 6;
	c1.y = 7;
	Coordonnee c2;
	c2.x = -1;
	c2.y = -2;

	// Test Rectangle
	cout << "Rectangle ---- \n";
	Rectangle rect1(1, 2);
	Rectangle rect2(-1, 4, 1, 1);

	// Get
	cout << "	GET ---- \n";

	if (rect1.getHauteur() == 1 && rect1.getLargeur() == 2 && rect1.getAncrage().x == 0 && rect1.getAncrage().y == 0)
	{
		cout << "	    reussi - rect1\n";
	}
	else
	{
		cout << "	    !!manquer!! - rect1\n";
	}

	if (rect2.getHauteur() == 1 && rect2.getLargeur() == 4 && rect2.getAncrage().x == 1 && rect2.getAncrage().y == 1)
	{
		cout << "	    reussi - rect2\n";
	}
	else
	{
		cout << "	    !!manquer!! - rect2\n";
	}

	// SET
	cout << "	SET ---- \n";

	rect1.setHauteur(5);
	rect1.setLargeur(6);
	rect1.setAncrage(c1);
	if (rect1.getHauteur() == 5 && rect1.getLargeur() == 6 && rect1.getAncrage().x == 6 && rect1.getAncrage().y == 7)
	{
		cout << "	    reussi - rect1\n";
	}
	else
	{
		cout << "	    !!manquer!! - rect1\n";
	}

	rect2.setHauteur(0);
	rect2.setLargeur(-4);
	rect2.setAncrage(c2);
	if (rect2.getHauteur() == 1 && rect2.getLargeur() == 4 && rect2.getAncrage().x == -1 && rect2.getAncrage().y == -2)
	{
		cout << "	    reussi - rect2\n";
	}
	else
	{
		cout << "	    !!manquer!! - rect2\n";
	}

	// Test Cercle
	cout << "Cercle ---- \n";
	Cercle cer1(9);
	Cercle cer2(-1, 1, 1);

	// Get
	cout << "	GET ---- \n";

	if (cer1.getRayon() == 9 && cer1.getAncrage().x == 0 && cer1.getAncrage().y == 0)
	{
		cout << "	    reussi - cer1\n";
	}
	else
	{
		cout << "	    !!manquer!! - cer1\n";
	}

	if (cer2.getRayon() == 1 && cer2.getAncrage().x == 1 && cer2.getAncrage().y == 1)
	{
		cout << "	    reussi - cer2\n";
	}
	else
	{
		cout << "	    !!manquer!! - cer2\n";
	}

	// SET
	cout << "	SET ---- \n";

	cer1.setRayon(0);
	cer1.setAncrage(c1);
	if (cer1.getRayon() == 9 && cer1.getAncrage().x == 6 && cer1.getAncrage().y == 7)
	{
		cout << "	    reussi - cer1\n";
	}
	else
	{
		cout << "	    !!manquer!! - cer1\n";
	}

	cer2.setRayon(5);
	cer2.setAncrage(c2);
	if (cer2.getRayon() == 5 && cer2.getAncrage().x == -1 && cer2.getAncrage().y == -2)
	{
		cout << "	    reussi - cer2\n";
	}
	else
	{
		cout << "	    !!manquer!! - cer2\n";
	}

	// Test Carre
	cout << "Carre ---- \n";
	Carre car1(9);
	Carre car2(-1, 1, 1);

	// Get
	cout << "	GET ---- \n";

	if (car1.getCote() == 9 && car1.getAncrage().x == 0 && car1.getAncrage().y == 0)
	{
		cout << "	    reussi - car1\n";
	}
	else
	{
		cout << "	    !!manquer!! - car1\n";
	}

	if (car2.getCote() == 1 && car2.getAncrage().x == 1 && car2.getAncrage().y == 1)
	{
		cout << "	    reussi - car2\n";
	}
	else
	{
		cout << "	    !!manquer!! - car2\n";
	}

	// SET
	cout << "	SET ---- \n";

	car1.setCote(0);
	car1.setAncrage(c1);
	if (car1.getCote() == 9 && car1.getAncrage().x == 6 && car1.getAncrage().y == 7)
	{
		cout << "	    reussi - car1\n";
	}
	else
	{
		cout << "	    !!manquer!! - car1\n";
	}

	car2.setCote(5);
	car2.setAncrage(c2);
	if (car2.getCote() == 5 && car2.getAncrage().x == -1 && car2.getAncrage().y == -2)
	{
		cout << "	    reussi - car2\n";
	}
	else
	{
		cout << "	    !!manquer!! - car2\n";
	}
}

void Tests::tests_unitaires_vecteur()
{
	// Tests sur la classe Vecteur
	cout << "\n---- TEST VECTEUR ---- \n";
	Forme *rect = new Rectangle(1, 2);
	Forme *cer = new Cercle(9);
	Forme *car = new Carre(-1, 1, 1);
	Vecteur vect;

	// Test Ajout
	cout << "	Ajout ---- \n";
	if (vect.add(rect))
	{
		cout << "	    reussi - rect\n";
	}
	else
	{
		cout << "	    !!manquer!! - rect\n";
	}

	if (vect.add(cer))
	{
		cout << "	    reussi - cer\n";
	}
	else
	{
		cout << "	    !!manquer!! - cer\n";
	}

	if (vect.add(car))
	{
		cout << "	    reussi - car\n";
	}
	else
	{
		cout << "	    !!manquer!! - car\n";
	}

	// Test Get
	cout << "	GET ---- \n";
	// GetForme
	if (vect.getForme(0) == rect)
	{
		cout << "	    reussi - rect\n";
	}
	else
	{
		cout << "	    !!manquer!! - rect\n";
	}
	if (vect.getForme(2) == car)
	{
		cout << "	    reussi - car\n";
	}
	else
	{
		cout << "	    !!manquer!! - car\n";
	}
	if (vect.getForme(3) == NULL)
	{
		cout << "	    reussi - rien\n";
	}
	else
	{
		cout << "	    !!manquer!! - rien\n";
	}

	// GetTaille
	if (vect.getTaille() == 3)
	{
		cout << "	    reussi - taille\n";
	}
	else
	{
		cout << "	    !!manquer!! - taille\n";
	}

	// GetCapacite
	if (vect.getCapacite() == 4)
	{
		cout << "	    reussi - capacite\n";
	}
	else
	{
		cout << "	    !!manquer!! - capacite\n";
	}

	// Test Remove
	cout << "	Remove ---- \n";
	if (vect.remove(0) == rect)
	{
		cout << "	    reussi - rect\n";
	}
	else
	{
		cout << "	    !!manquer!! - rect\n";
	}

	if (vect.remove(0) == cer)
	{
		cout << "	    reussi - cer\n";
	}
	else
	{
		cout << "	    !!manquer!! - cer\n";
	}

	if (vect.remove(0) == car)
	{
		cout << "	    reussi - car\n";
	}
	else
	{
		cout << "	    !!manquer!! - car\n";
	}

	if (vect.remove(0) == NULL)
	{
		cout << "	    reussi - rien\n";
	}
	else
	{
		cout << "	    !!manquer!! - rien\n";
	}

	if (vect.getTaille() == 0)
	{
		cout << "	    reussi - taille\n";
	}
	else
	{
		cout << "	    !!manquer!! - taille\n";
	}

	if (vect.getCapacite() == 4)
	{
		cout << "	    reussi - capacite\n";
	}
	else
	{
		cout << "	    !!manquer!! - capacite\n";
	}

	// TestClear
	cout << "	Clear ---- \n";
	for (int i = 0; i < 100; i++)
	{
		Forme *rect1 = new Rectangle(1, 1);
		vect.add(rect1);
	}

	if (vect.getTaille() == 100)
	{
		cout << "	    reussi - taille\n";
	}
	else
	{
		cout << "	    !!manquer!! - taille\n";
	}
	vect.clear();
	if (vect.isVide())
	{
		cout << "	    reussi - vide\n";
	}
	else
	{
		cout << "	    !!manquer!! - vide\n";
	}
}

void Tests::tests_unitaires_couche()
{
	// Tests sur la classe Couche
	cout << "\n---- TEST COUCHE ---- \n";
	Couche couche;
	Forme *rect = new Rectangle(1, 2);
	Forme *cer = new Cercle(9);
	Forme *car = new Carre(1, 1, 1);
	couche.setEtat(2);

	// Test AddForme
	cout << "	ADDForme ---- \n";
	if (couche.addForme(rect))
	{
		cout << "	    reussi - rect\n";
	}
	else
	{
		cout << "	    !!manquer!! - rect\n";
	}
	if (couche.addForme(cer))
	{
		cout << "	    reussi - cer\n";
	}
	else
	{
		cout << "	    !!manquer!! - cer\n";
	}
	if (couche.addForme(car))
	{
		cout << "	    reussi - car\n";
	}
	else
	{
		cout << "	    !!manquer!! - car\n";
	}

	// Test Get
	cout << "	GET ---- \n";
	// GetForme
	if (couche.getForme(0) == rect)
	{
		cout << "	    reussi - rect\n";
	}
	else
	{
		cout << "	    !!manquer!! - rect\n";
	}
	if (couche.getForme(2) == car)
	{
		cout << "	    reussi - car\n";
	}
	else
	{
		cout << "	    !!manquer!! - car\n";
	}
	if (couche.getForme(3) == NULL)
	{
		cout << "	    reussi - rien\n";
	}
	else
	{
		cout << "	    !!manquer!! - rien\n";
	}

	// Test Translater
	cout << "	Translater ---- \n";
	if (couche.translater(-10, -10))
	{
		cout << "	    reussi - -10\n";
	}
	else
	{
		cout << "	    !!manquer!! - -10\n";
	}
	if (couche.translater(10, 10))
	{
		cout << "	    reussi - 10\n";
	}
	else
	{
		cout << "	    !!manquer!! - 10\n";
	}

	// Test aire
	cout << "	Aire ---- \n";
	if ((int)couche.aire() == 59)
	{
		cout << "	    reussi - aire\n";
	}
	else
	{
		cout << "	    !!manquer!! - aire\n";
	}

	// Test Remove
	cout << "	Remove ---- \n";
	if (couche.removeForme(0))
	{
		cout << "	    reussi - rect\n";
	}
	else
	{
		cout << "	    !!manquer!! - rect\n";
	}

	if (couche.removeForme(0))
	{
		cout << "	    reussi - cer\n";
	}
	else
	{
		cout << "	    !!manquer!! - cer\n";
	}

	if (couche.removeForme(0))
	{
		cout << "	    reussi - car\n";
	}
	else
	{
		cout << "	    !!manquer!! - car\n";
	}

	if (!couche.removeForme(0))
	{
		cout << "	    reussi - rien\n";
	}
	else
	{
		cout << "	    !!manquer!! - rien\n";
	}

	// Test Etat
	cout << "	Etat ---- \n";

	for (int i = 0; i < 100; i++)
	{
		Forme *rect1 = new Rectangle(1, 1);
		couche.addForme(rect1);
	}

	couche.renitialiser();
	couche.afficher(cout);

	if (!couche.setEtat(1))
	{
		cout << "	    reussi - etat1\n";
	}
	else
	{
		cout << "	    !!manquer!! - etat1\n";
	}
	if (couche.setEtat(3))
	{
		cout << "	    reussi - etat3\n";
	}
	else
	{
		cout << "	    !!manquer!! - etat3\n";
	}

	if (!couche.addForme(rect))
	{
		cout << "	    reussi - rect\n";
	}
	else
	{
		cout << "	    !!manquer!! - rect\n";
	}
	if (!couche.translater(-10, -10))
	{
		cout << "	    reussi - -10\n";
	}
	else
	{
		cout << "	    !!manquer!! - -10\n";
	}
	if (!couche.removeForme(0))
	{
		cout << "	    reussi - rect\n";
	}
	else
	{
		cout << "	    !!manquer!! - rect\n";
	}
}

void Tests::tests_unitaires_canevas()
{
	// Tests sur la classe Canevas
	Canevas canevas;
	Forme *f1 = new Rectangle(48, 20, 69, 33);
	Forme *f2 = new Carre(15);
	Forme *f3 = new Cercle(76, 2, 2);
	cout << "\n---- TEST CANEVAS ---- \n";

	// Test AddForme
	cout << "	ADDForme ---- \n";
	if (canevas.ajouterForme(f1))
	{
		cout << "	    reussi - f1\n";
	}
	else
	{
		cout << "	    !!manquer!! - f1\n";
	}
	if (canevas.ajouterForme(f2))
	{
		cout << "	    reussi - f2\n";
	}
	else
	{
		cout << "	    !!manquer!! - f2\n";
	}
	if (canevas.ajouterForme(f3))
	{
		cout << "	    reussi - f3\n";
	}
	else
	{
		cout << "	    !!manquer!! - f3\n";
	}

	// Test Translater
	cout << "	Translater ---- \n";
	if (canevas.translater(-10, -10))
	{
		cout << "	    reussi - -10\n";
	}
	else
	{
		cout << "	    !!manquer!! - -10\n";
	}
	if (canevas.translater(10, 10))
	{
		cout << "	    reussi - 10\n";
	}
	else
	{
		cout << "	    !!manquer!! - 10\n";
	}

	// Test aire
	cout << "	Aire ---- \n";
	if ((int)canevas.aire() == 1662)
	{
		cout << "	    reussi - aire\n";
	}
	else
	{
		cout << "	    !!manquer!! - aire\n";
	}

	// Test Etat
	cout << "	Etat ---- \n";
	if (canevas.activerCouche(2))
	{
		cout << "	    reussi - etat\n";
	}
	else
	{
		cout << "	    !!manquer!! - etat\n";
	}

	if (canevas.cacherCouche(1))
	{
		cout << "	    reussi - etat\n";
	}
	else
	{
		cout << "	    !!manquer!! - etat\n";
	}
	if (canevas.cacherCouche(0))
	{
		cout << "	    reussi - etat\n";
	}
	else
	{
		cout << "	    !!manquer!! - etat\n";
	}

	canevas.activerCouche(0);
	// Test Remove
	cout << "	Remove ---- \n";
	if (canevas.retirerForme(0))
	{
		cout << "	    reussi - remove\n";
	}
	else
	{
		cout << "	    !!manquer!! - remove\n";
	}

	if (!canevas.retirerForme(3))
	{
		cout << "	    reussi - remove\n";
	}
	else
	{
		cout << "	    !!manquer!! - remove\n";
	}
}

void Tests::tests_unitaires()
{
	// Fait tous les tests unitaires
	tests_unitaires_formes();
	tests_unitaires_vecteur();
	tests_unitaires_couche();
	tests_unitaires_canevas();
}

void Tests::tests_application()
{
	// Fait tous les tests applicatifs
	cout << "\n\n.......			---- TEST UNITAIRES ---- 			.......\n\n";
	tests_unitaires();
	cout << "\n\n.......			---- TEST APPCAS01 ---- 			.......\n\n";
	tests_application_cas_01();
	cout << "\n\n.......			---- TEST APPCAS02 ---- 			.......\n\n";
	tests_application_cas_02();
	// cout << "\n\n.......			---- TEST VALIDE ---- 			.......\n\n";
	// testValid();
}

void Tests::tests_application_cas_01()
{
	cout << "TESTS APPLICATION (CAS 01)" << endl;
	// Il faut ajouter les operations realisant ce scenario de test.
	Canevas canevas;
	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #1 : essay d'activer une couche invalide\n";
	cout << "---------------------------------------------------\n";
	if (!canevas.activerCouche(5))
	{
		cout << "couche#5 inexistente\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #2 : essay d'activer une couche invalide\n";
	cout << "---------------------------------------------------\n";
	if (!canevas.activerCouche(6))
	{
		cout << "couche#6 inexistente\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #3 : ajout de 2 formes rectangle\n";
	cout << "---------------------------------------------------\n";
	cout << "Ajout des formes suiventes : \n";
	for (int i = 0; i < 2; i++)
	{
		Forme *rectangle = new Rectangle(i, i);
		if (canevas.ajouterForme(rectangle))
		{
			rectangle->afficher(cout);
		}
		else
		{
			cout << "ERREUR\n";
			break;
		}
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #4\n";
	cout << "---------------------------------------------------\n";
	cout << "Afficher le canevas : \n";
	canevas.afficher(cout);
	cout << "l'aire du canevas : " << canevas.aire() << "\n";

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #5 : activer la couche 0 et ajouter des formes carre avec des dimentions invalides\n";
	cout << "---------------------------------------------------\n";
	//!!!!!!!IMPORTANT!!!!!!!! -- TOUT LES DIMENTION DES FORMES QUI SONT INVALIDE(PLUS PETIT OU = A 0) DANS LE CONSTRUCTEUR SONT REMIS A 1 ET POUR LES SET LES VALEUR INVALIDES SONT IGNORER
	if (canevas.activerCouche(0))
	{
		cout << "couche#0 inexistente\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "Ajout des formes suiventes : \n";
	for (int i = 0; i < 2; i++)
	{
		Forme *carre = new Carre(i, i, i);
		if (canevas.ajouterForme(carre))
		{
			carre->afficher(cout);
		}
		else
		{
			cout << "ERREUR\n";
			break;
		}
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #6 : Translation\n";
	cout << "---------------------------------------------------\n";
	if (canevas.translater(-10, -10))
	{
		cout << "translation de x=-10 y=-10\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #7\n";
	cout << "---------------------------------------------------\n";
	cout << "Afficher le canevas : \n";
	canevas.afficher(cout);
	cout << "l'aire du canevas : " << canevas.aire() << "\n";

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #8 : retirer les 2 premier element\n";
	cout << "---------------------------------------------------\n";
	if (canevas.retirerForme(0) && canevas.retirerForme(0))
	{
		cout << "retirer forme a la position 0\n";
		cout << "retirer forme a la position 0\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #9\n";
	cout << "---------------------------------------------------\n";
	cout << "Afficher le canevas : \n";
	canevas.afficher(cout);
	cout << "l'aire du canevas : " << canevas.aire() << "\n";

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #10 : renitialiser\n";
	cout << "---------------------------------------------------\n";
	if (canevas.reinitialiser())
	{
		cout << "Canevas renitialiser\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #11\n";
	cout << "---------------------------------------------------\n";
	cout << "Afficher le canevas : \n";
	canevas.afficher(cout);
	cout << "l'aire du canevas : " << canevas.aire() << "\n";

	cout << "			..FIN..  \n";
}

void Tests::tests_application_cas_02()
{
	cout << "TESTS APPLICATION (CAS 02)" << endl;

	// Il faut ajouter les operations realisant ce scenario de test.
	Canevas canevas;
	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #1 : activer la couche 3\n";
	cout << "---------------------------------------------------\n";
	if (canevas.activerCouche(3))
	{
		cout << "couche#3 activer\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #2 : ajouter 15 formes\n";
	cout << "---------------------------------------------------\n";
	cout << "Ajout des formes suiventes : \n";
	for (int i = 1; i < 16; i++)
	{
		Forme *rectangle = new Rectangle(i, i);
		if (canevas.ajouterForme(rectangle))
		{
			rectangle->afficher(cout);
		}
		else
		{
			cout << "ERREUR\n";
			break;
		}
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #3 : activer la couche 2\n";
	cout << "---------------------------------------------------\n";
	if (canevas.activerCouche(2))
	{
		cout << "couche#2 activer\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #4 : ajouter des formes\n";
	cout << "---------------------------------------------------\n";
	Forme *cercle = new Cercle(7);
	Forme *carre = new Carre(5, 4, 4);
	if (canevas.ajouterForme(cercle) && canevas.ajouterForme(carre))
	{
		cout << "Ajout des formes suiventes : \n";
		cercle->afficher(cout);
		carre->afficher(cout);
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #5\n";
	cout << "---------------------------------------------------\n";
	cout << "Afficher le canevas : \n";
	canevas.afficher(cout);
	cout << "l'aire du canevas : " << canevas.aire() << "\n";

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #6 : activer la couche 3 et retirer 2 forme /(la 10 et 11/)\n";
	cout << "---------------------------------------------------\n";
	if (canevas.activerCouche(3) && canevas.retirerForme(10) && canevas.retirerForme(10))
	{
		cout << "couche#3 activer\n";
		cout << "retirer forme a la position 10\n";
		cout << "retirer forme a la position 10\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #7\n";
	cout << "---------------------------------------------------\n";
	cout << "Afficher le canevas : \n";
	canevas.afficher(cout);
	cout << "l'aire du canevas : " << canevas.aire() << "\n";

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #8 : activer la couche 4\n";
	cout << "---------------------------------------------------\n";
	if (canevas.activerCouche(4))
	{
		cout << "couche#4 activer\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #9 : test si impossible de retirer avec un mauvais index\n";
	cout << "---------------------------------------------------\n";
	if (!canevas.retirerForme(10))
	{
		cout << "imposible de retirer\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #10 : renitialiser\n";
	cout << "---------------------------------------------------\n";
	if (canevas.reinitialiser())
	{
		cout << "Canevas renitialiser\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #11\n";
	cout << "---------------------------------------------------\n";
	cout << "Afficher le canevas : \n";
	canevas.afficher(cout);
	cout << "l'aire du canevas : " << canevas.aire() << "\n";

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #12 : test si la couche de base active est bien la couche 0\n";
	cout << "---------------------------------------------------\n";
	Forme *cercle2 = new Cercle(7);
	Forme *carre2 = new Carre(5, 4, 4);
	// suposer etre dans la couche 0
	if (canevas.ajouterForme(cercle2) && canevas.ajouterForme(carre2))
	{
		cout << "Ajout des formes suiventes : \n";
		cercle2->afficher(cout);
		carre2->afficher(cout);
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #13\n";
	cout << "---------------------------------------------------\n";
	cout << "Afficher le canevas : \n";
	canevas.afficher(cout);

	cout << "			..FIN..  \n";
}
// cout << "\n";
void Tests::testValid()
{
	Canevas canevas;
	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #1 : activer couche 1\n";
	cout << "---------------------------------------------------\n";
	if (canevas.activerCouche(1))
	{
		cout << "couche#1 activer\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #2 : ajouter 3 formes\n";
	cout << "---------------------------------------------------\n";
	Forme *rectangle = new Rectangle(3, 2);
	Forme *carre = new Carre(4, 2, 3);
	Forme *cercle = new Cercle(6, 7, 8);
	if (canevas.ajouterForme(rectangle) && canevas.ajouterForme(carre) && canevas.ajouterForme(cercle))
	{
		cout << "Ajout des formes suiventes : \n";
		rectangle->afficher(cout);
		carre->afficher(cout);
		cercle->afficher(cout);
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #3 : activer couche 2\n";
	cout << "---------------------------------------------------\n";
	if (canevas.activerCouche(2))
	{
		cout << "couche#2 activer\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #4 : ajouter 2 formes\n";
	cout << "---------------------------------------------------\n";
	Forme *rectangle1 = new Rectangle(5, 4);
	if (canevas.ajouterForme(rectangle1))
	{
		cout << "Ajout de la forme suivente : \n";
		rectangle1->afficher(cout);
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #5\n";
	cout << "---------------------------------------------------\n";
	cout << "Afficher le canevas : \n";
	canevas.afficher(cout);

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #6\n";
	cout << "---------------------------------------------------\n";
	cout << "l'aire du canevas : " << canevas.aire() << "\n";

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #7 : activer la couche 0\n";
	cout << "---------------------------------------------------\n";
	if (canevas.activerCouche(0))
	{
		cout << "couche#0 activer\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #7.a : ajouter 3 autre formes\n";
	cout << "---------------------------------------------------\n";
	Forme *rectangle2 = new Rectangle(1, 1);
	Forme *carre2 = new Carre(1);
	Forme *cercle2 = new Cercle(1);
	if (canevas.ajouterForme(rectangle2) && canevas.ajouterForme(carre2) && canevas.ajouterForme(cercle2))
	{
		cout << "Ajout des formes suiventes : \n";
		rectangle2->afficher(cout);
		carre2->afficher(cout);
		cercle2->afficher(cout);
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #8 : activer la couche 1\n";
	cout << "---------------------------------------------------\n";
	if (canevas.activerCouche(1))
	{
		cout << "couche#1 activer\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #8.a : translation\n";
	cout << "---------------------------------------------------\n";
	canevas.translater(5, 5);
	cout << "Translation de x=5 et y=5 !!!\n";

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #8.b : ajouter 3 formes\n";
	cout << "---------------------------------------------------\n";
	Forme *rectangle3 = new Rectangle(3, 2, 5, 5);
	Forme *carre3 = new Carre(4, 7, 8);
	Forme *cercle3 = new Cercle(6, 12, 13);
	if (canevas.ajouterForme(rectangle3) && canevas.ajouterForme(carre3) && canevas.ajouterForme(cercle3))
	{
		cout << "Ajout des formes suiventes : \n";
		rectangle3->afficher(cout);
		carre3->afficher(cout);
		cercle3->afficher(cout);
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #9 : initialiser couche 2\n";
	cout << "---------------------------------------------------\n";
	// cout << "!!!!!!L'instruction demander nest pas claire!!!!!!\n";
	if (canevas.activerCouche(2) && canevas.retirerForme(0))
	{
		cout << "Couche 2 - initialisée\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #10 : initialiser couche 3\n";
	cout << "---------------------------------------------------\n";
	// cout << "!!!!!!L'instruction demander nest pas claire!!!!!!\n";
	if (canevas.activerCouche(3) && !canevas.retirerForme(0))
	{
		cout << "Couche 3 - initialisée\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #11 : initialiser couche 4\n";
	cout << "---------------------------------------------------\n";
	// cout << "!!!!!!L'instruction demander nest pas claire!!!!!!\n";
	if (canevas.activerCouche(4) && !canevas.retirerForme(0))
	{
		cout << "Couche 4 - initialisée\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #12\n";
	cout << "---------------------------------------------------\n";
	cout << "Afficher le canevas : \n";
	canevas.afficher(cout);

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #13\n";
	cout << "---------------------------------------------------\n";
	cout << "l'aire du canevas : " << canevas.aire() << "\n";

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #14 : activer la couche 1 et retirer la premiere forme\n";
	cout << "---------------------------------------------------\n";
	if (canevas.activerCouche(1) && canevas.retirerForme(0))
	{
		cout << "couche#1 activer\n";
		cout << "premiere retirer\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #15\n";
	cout << "---------------------------------------------------\n";
	cout << "Afficher le canevas : \n";
	canevas.afficher(cout);

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #16\n";
	cout << "---------------------------------------------------\n";
	cout << "l'aire du canevas : " << canevas.aire() << "\n";

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #17 : renitialiser\n";
	cout << "---------------------------------------------------\n";
	if (canevas.reinitialiser())
	{
		cout << "Canevas renitialiser\n";
	}
	else
	{
		cout << "ERREUR\n";
	}

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #18\n";
	cout << "---------------------------------------------------\n";
	cout << "Afficher le canevas : \n";
	canevas.afficher(cout);

	cout << "\n---------------------------------------------------\n";
	cout << "                      Étape #19\n";
	cout << "---------------------------------------------------\n";
	cout << "l'aire du canevas : " << canevas.aire() << "\n";

	cout << "			..FIN..  \n";
}
