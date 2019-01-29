#include "Cvect2D.h"
#pragma once
//r�cup�re la valeur en x du vecteur
float Cvect2D::getVecteurEnX() const
{
	return m_fltX;
}
//r�cup�re la valeur en y du vecteur
float Cvect2D::getVecteurEnY() const
{
	return m_fltY;;
}
//set la valeur en x du vecteur
void Cvect2D::setVecteurEnX(float fltX)
{
	m_fltX = fltX;
}
//set la valeur en y du vecteur
void Cvect2D::setVecteurEnY(float fltY)
{
	m_fltY = fltY;
}

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

//surcharge de l'op�rateur + pour faire la somme de deux vecteurs
Cvect2D Cvect2D::operator+(Cvect2D &a) const
{
	Cvect2D v;
	v.m_fltX = m_fltX + a.m_fltX;
	v.m_fltY = m_fltY + a.m_fltY;
	return v;
	
}

//surcharge de l'op�rateur - pour faire la diff�rence de deux vecteurs
Cvect2D Cvect2D::operator-(Cvect2D &a) const
{
	Cvect2D v;
	v.m_fltX = m_fltX - a.m_fltX;
	v.m_fltY = m_fltY - a.m_fltY;
	return v;
	
}

//surcharge de l'op�rateur * pour faire le produit de deux vecteurs
Cvect2D Cvect2D::operator*(Cvect2D &a) const
{
	Cvect2D v;
	v.m_fltX = m_fltX * a.m_fltX;
	v.m_fltY = m_fltY * a.m_fltY;
	return v;
}

//surchargede l'op�rateur == pour faire la comparaison de deux vecteurs
bool Cvect2D::operator==(Cvect2D &a) const
{
	if (m_fltX == a.m_fltX && m_fltY == a.m_fltY)
		return true;
	else
		return false;
}
