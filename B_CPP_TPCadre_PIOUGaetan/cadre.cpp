#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include "cadre.h"


//Constructeurs

CCadre::CCadre() {
	//BUT: Creer un objet de classe CCadre et initialiser ses valeurs avec des valeurs par defaut
	//ENTREE: Aucune
	//SORTIE: Un objet de classe CCadre dont les valeurs sont initialisees par defaut

	this->setX(10);
	this->setY(5);
	this->setLargeur(5);
	this->setLongueur(2 * this->getLargeur());
	this->setMotif('*');
}

CCadre::CCadre(int nX, int nY, int nLargeur, int nLongueur, char nMotif) {
	//BUT: Creer un objet de classe CCadre et initialiser ses valeurs avec des valeurs donnees en parametre
	//ENTREE: Aucune
	//SORTIE: Un objet de classe CCadre dont les valeurs sont initialisees selon les valeurs en parametre

	this->setX(nX);
	this->setY(nY);
	this->setLargeur(nLargeur);
	this->setLongueur(nLongueur);
	this->setMotif(nMotif);
}


//Fonctions

void CCadre::afficheCadre() {
	std::cout << "X: " << this->getX() << std::endl;
	std::cout << "Y: " << this->getY() << std::endl;
	std::cout << "Largeur: " << this->getLargeur() << std::endl;
	std::cout << "Longueur: " << this->getLongueur() << std::endl;
	std::cout << "Motif: " << this->getMotif() << std::endl;
}

int CCadre::surfaceCadre() {
	int surface = this->getLargeur() * this->getLongueur();
	return surface;
}

int CCadre::perimetreCadre() {
	int perimetre = (this->getLargeur() + this->getLongueur()) * 2;
	return perimetre;
}

bool CCadre::isCarreCadre() {
	bool isCarre = false;
	if (this->getLargeur() == this->getLongueur()) {
		isCarre = true;
	}

	return isCarre;
}


//Acesseurs

int CCadre::getX() {
	return this->xPAncrage;
}

int CCadre::getY() {
	return this->yPAncrage;
}

int CCadre::getLargeur() {
	return this->largeur;
}

int CCadre::getLongueur() {
	return this->longueur;
}

char CCadre::getMotif() {
	return this->motif;
}


//Mutateurs

void CCadre::setX(int nX) {
	this->xPAncrage = nX;
}

void CCadre::setY(int nY) {
	this->yPAncrage = nY;
}

void CCadre::setLargeur(int nLargeur) {
	this->largeur = nLargeur;
}

void CCadre::setLongueur(int nLongueur) {
	this->longueur = nLongueur;
}

void CCadre::setMotif(char nMotif) {
	this->motif = nMotif;
}