#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#include "Cvect2D.h"



using namespace std;

int main() {

	float fltX;
	float fltY;

	Cvect2D v1;
	Cvect2D v2;
	Cvect2D SommeV(0, 0);
	Cvect2D DifferenceV(0, 0);
	Cvect2D ProduitVectoriel(0, 0);

	cout << "Coordonnee en X du premier vecteur" << endl;
	cin >> fltX;
	v1.setVecteurEnX(fltX);


	cout << "Coordonnee en Y du premier vecteur" << endl;
	cin >> fltY;
	v1.setVecteurEnY(fltY);

	cout << "Coordonnee en X du deuxieme vecteur" << endl;
	cin >> fltX;
	v2.setVecteurEnX(fltX);

	cout << "Coordonnee en Y du deuxieme vecteur" << endl;
	cin >> fltY;
	v2.setVecteurEnY(fltY);

	if (v1 == v2) {
		std::cout << "Les deux vecteurs sont egaux\n";
	}
	else
	{
		std::cout << "Les deux vecteurs sont differents\n";
	}

	SommeV = v1 + v2;
	SommeV.affich();

	DifferenceV = v1 - v2;
	DifferenceV.affich();

	ProduitVectoriel = v1 * v2;
	ProduitVectoriel.affich();



	system("pause");

	return 0;
}