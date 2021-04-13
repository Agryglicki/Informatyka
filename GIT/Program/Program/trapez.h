#pragma once
#include<iostream>

class Trapez
{

private:

	int fr;
	int sec;
	int th;
	int rd;
	int ht;

public:

	Trapez();
	Trapez(int fr, int sec, int th, int rd, int ht);

	float oblicz(int fr, int sec, int th);
	int obwod(int fr, int sec, int rd, int ht);
};