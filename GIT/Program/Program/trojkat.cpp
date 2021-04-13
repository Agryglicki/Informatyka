#include "trojkat.h"
#include<iostream>

Trojkat::Trojkat()
{
	
}

Trojkat::Trojkat(int fr, int sec, int rd, int th)
{
	this->fr = fr;
	this->sec = sec;
	this->rd = rd;
	this->th = th;
}


float Trojkat::oblicz(int fr, int sec)
{
	int trojkat;
	trojkat = (fr * sec) / 2;
	std::cout << "pole trojkatu to: " << trojkat << std::endl;
	return 0;
}

int Trojkat::obwod(int fr, int rd, int th)
{
	int trojkat;
	trojkat = fr + rd + th;
	std::cout << "obwod trojkata to: " << trojkat << std::endl;
	return 0;

}