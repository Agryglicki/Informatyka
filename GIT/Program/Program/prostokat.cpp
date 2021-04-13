#include "prostokat.h"
#include<iostream>

Prostokat::Prostokat()
{

}

Prostokat::Prostokat( int fr,  int sec)
{
	this->fr = fr;
	this->sec = sec;
}

int Prostokat::oblicz( int fr,  int sec)
{
	int prostokat;
	prostokat = fr * sec;
	std::cout << "pole prostokata to: " << prostokat << std::endl;
	return 0;
}

int Prostokat::obwod( int fr,  int sec)
{
	int prostokat;
	prostokat = (fr * 2) + (sec * 2);
	std::cout << "obwod prostokata to: " << prostokat << std::endl;
	return 0;

}