#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include "cadre.h"

int main() {
	CCadre cadre1;

	cadre1.afficheCadre();
	std::cout << "Surface: " << cadre1.surfaceCadre() << std::endl;
	std::cout << "Perimetre: " << cadre1.perimetreCadre() << std::endl;
	std::cout << "Carre ? " << cadre1.isCarreCadre() << std::endl;

	return 0;
}