#pragma once

//Declaration de la classe Cadre
class CCadre {
private:
	int xPAncrage;
	int yPAncrage;
	int largeur;
	int longueur;
	char motif;

public:
	//Constructeurs:
	CCadre();
	CCadre(int nX, int nY, int nLargeur, int nLongueur, char nMotif);

	//Fonctions
	void afficheCadre();
	int surfaceCadre();
	int perimetreCadre();
	bool isCarreCadre();


	//Acesseurs:
	int getX();
	int getY();
	int getLargeur();
	int getLongueur();
	char getMotif();

	//Mutateurs:
	void setX(int nX);
	void setY(int nY);
	void setLargeur(int nLargeur);
	void setLongueur(int nLongueur);
	void setMotif(char nMotif);
};