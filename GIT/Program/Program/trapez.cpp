#include "trapez.h"
#include<iostream>

Trapez::Trapez()
{
	
}

Trapez::Trapez(int fr, int sec, int th, int rd, int ht)
{
	this->fr = fr;
	this->sec = sec;
	this->th = th;
	this->rd = rd;
	this->ht = ht;
}

float Trapez::oblicz(int fr, int sec, int th)
{
	int trapez;
	trapez = ((fr + sec) * th) / 2;
	std::cout << "pole trapezu to: " << trapez << std::endl;
	return 0;
}

int Trapez::obwod(int fr, int sec, int th, int ht)
{
	int trapez;
	trapez = fr + sec + th + ht;
	std::cout << "obwod trapezu to: " << trapez << std::endl;
	return 0;

}