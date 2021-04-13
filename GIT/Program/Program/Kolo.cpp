#include "Kolo.h"
#include<iostream>

Kolo::Kolo()
{
	
}

Kolo::Kolo(float fr, int sec)
{
	this->fr = fr;
	this->sec = sec;
}


float Kolo::oblicz(float fr, int sec)
{
	float kolo;
	kolo = fr * (sec * sec);
	std::cout << "pole kolo to: " << kolo << std::endl;
	return 0;
}

float Kolo::obwod(float fr, int sec)
{
	float kolo;
	kolo = fr * (sec * 2);
	std::cout << "obwod kolo to: " << kolo << std::endl;
	return 0;
}