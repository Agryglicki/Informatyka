#pragma once
#include<iostream>

class Prostokat
{

private:

	 int fr;
	 int sec;

public:

	Prostokat();
	Prostokat( int fr,  int sec);
	

	int oblicz( int fr,  int sec);
	int obwod( int fr,  int sec);

};