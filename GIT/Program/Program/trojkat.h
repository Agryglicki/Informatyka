#pragma once
#include<iostream>

class Trojkat
{

private:

	int fr;
	int sec;
	int rd;
	int th;

public:

	Trojkat();
	Trojkat(int fr, int sec, int rd, int th);

	float oblicz(int fr, int sec);
	int obwod(int fr, int rd, int th);

};