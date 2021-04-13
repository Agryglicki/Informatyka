#pragma once

#include<iostream>

class Kolo
{

private:

	float fr;
	int sec;

public:

	Kolo();
	Kolo(float fr, int sec);

	float oblicz(float fr, int sec);
	float obwod(float fr, int sec);

};