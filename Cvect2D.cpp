#include "Cvect2D.h"
#pragma once

//destructeur
Cvect2D::~Cvect2D()
{
}

//affiche le vecteur
const void Cvect2D::affich()
{
	std::cout << m_fltX << std::endl;
	std::cout << m_fltY << std::endl;
}

//surcharge de l'opérateur + pour faire la somme de deux vecteurs
Cvect2D Cvect2D::operator+(Cvect2D &a) const
{
	Cvect2D v;
	v.m_fltX = m_fltX + a.m_fltX;
	v.m_fltY = m_fltY + a.m_fltY;
	return v;
	
}

//surcharge de l'opérateur - pour faire la différence de deux vecteurs
Cvect2D Cvect2D::operator-(Cvect2D &a) const
{
	Cvect2D v;
	v.m_fltX = m_fltX - a.m_fltX;
	v.m_fltY = m_fltY - a.m_fltY;
	return v;
	
}

//surcharge de l'opérateur * pour faire le produit de deux vecteurs
Cvect2D Cvect2D::operator*(Cvect2D &a) const
{
	Cvect2D v;
	v.m_fltX = m_fltX * a.m_fltX;
	v.m_fltY = m_fltY * a.m_fltY;
	return v;
}

//surchargede l'opérateur == pour faire la comparaison de deux vecteurs
bool Cvect2D::operator==(Cvect2D &a) const
{
	if (m_fltX == a.m_fltX && m_fltY == a.m_fltY)
		return true;
	else
		return false;
}
