#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#include "Cvect2D.h"





int main() {


	Cvect2D v1(7, 11);
	Cvect2D v2(3, 5);
	Cvect2D SommeV(0, 0);
	Cvect2D DifferenceV(0, 0);
	Cvect2D ProduitVectoriel(0, 0);


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