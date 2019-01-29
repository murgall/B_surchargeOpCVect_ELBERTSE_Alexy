#pragma once
#include <iostream>



class Cvect2D {

	//Donnees membres
private:
	float m_fltX;
	float m_fltY;




	//fonctions membres
public:
	//constructeur
	Cvect2D(float abs = 0, float ord = 0) :m_fltX(abs), m_fltY(ord) {}


	~Cvect2D();

	const void affich();

	//surcharge op�rateur avec r�f�rence
	Cvect2D operator+ (Cvect2D&) const;
	Cvect2D operator- (Cvect2D&) const;
	Cvect2D operator* (Cvect2D&) const;
	bool operator ==(Cvect2D&)const;

};