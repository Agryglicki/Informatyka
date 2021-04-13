#include "szescian.h"
#include<iostream>

Szescian::Szescian()
{
	
}

Szescian::Szescian(int fr)
{
	this->fr = fr;
}


int Szescian::oblicz(int fr)
{
	int szescian;
	szescian = fr * fr * fr;
	std::cout << "pole szescianu to: " << szescian << std::endl;
	return 0;
}

int Szescian::obwod(int fr)
{
	int szescian;
	szescian = fr * 12;
	std::cout << "obwod szescianu to: " << szescian << std::endl;
	return 0;
}