#include<iostream>
#include "prostokat.h"
#include "trapez.h"
#include "trojkat.h"
#include "szescian.h"
#include "Kolo.h"

using namespace std;


int main()
{
	int majnmenu = 1;
	while (majnmenu == 1)
	{

		cout << "wybierz figure :" << endl;
		cout << "1 - Prostokat" << endl;
		cout << "2 - Trapez" << endl;
		cout << "3 - Trojkat" << endl;
		cout << "4 - Szescian" << endl;
		cout << "5 - Kolo" << endl;
		int figura = 0;
		cin >> figura;

		if (figura == 1)
		{
			Prostokat Prostokat;
			unsigned int wysokoscPr;
			unsigned int szerokoscPr;
			cout << "wpisz wysokosc" << endl;
			cin >> wysokoscPr;
			cout << "wpisz szerokosc" << endl;
			cin >> szerokoscPr;
			Prostokat.oblicz(wysokoscPr, szerokoscPr);
			Prostokat.obwod(wysokoscPr, szerokoscPr);
		}
		else if (figura == 2)
		{
			Trapez Trapez;
			unsigned int podstawaG ;
			unsigned int podstawaD ;
			unsigned int wysokoscTra ;
			unsigned int bok1 ;
			unsigned int bok2 ;
			cout << "wpisz podstawe gorna" << endl;
			cin >> podstawaG;
			cout << "wpisz podstawe dolna" << endl;
			cin >> podstawaD;
			cout << "wpisz wysokosc" << endl;
			cin >> wysokoscTra;
			cout << "wpisz dlugosc boku 1" << endl;
			cin >> bok1;
			cout << "wpisz dlugosc boku 2" << endl;
			cin >> bok2;
			Trapez.oblicz(podstawaG, podstawaD, wysokoscTra);
			Trapez.obwod(podstawaG, podstawaD, bok1, bok2);
		}
		else if (figura == 3)
		{
			Trojkat Trojkat;
			unsigned int wysokoscTr;
			unsigned int bokTr;
			unsigned int bok3 ;
			unsigned int bok4 ;
			cout << "wpisz wysokosc" << endl;
			cin >> wysokoscTr;
			cout << "wpisz dlugosc boku 1" << endl;
			cin >> bokTr;
			cout << "wpisz dlugosc boku 2" << endl;
			cin >> bok3;
			cout << "wpisz dlugosc boku 3" << endl;
			cin >> bok4;
			Trojkat.oblicz(bokTr, wysokoscTr);
			Trojkat.obwod(bokTr, bok3, bok4);
		}
		else if (figura == 4)
		{
			Szescian Szescian;
			unsigned int bokSz ;
			cout << "wpisz dlugosc boku Szescianu" << endl;
			cin >> bokSz;
			Szescian.oblicz(bokSz);
			Szescian.obwod(bokSz);
		}
		else if (figura == 5)
		{
			Kolo Kolo;
			float Pi = 3.14;
			unsigned int promien ;
			cout << "wpisz promien kola" << endl;
			cin >> promien;
			Kolo.oblicz(Pi, promien);
			Kolo.obwod(Pi, promien);
		}
		else
		{
			cout << "nieprawidlowa wartosc" << endl;
		}

		cout << "jesli chcesz sprawdzic pozostale opcje wcisnij 1, jesli nie 2" << endl;
		cin >> majnmenu;
		if (majnmenu == 1)
		{
			cout << "program zostanie ponownie uruchomiony" << endl;
			system("cls");
		}
		else if (majnmenu == 2)
		{
			cout << "good night" << endl;
		}
		else
		{
			cout << "no bardzo zabawne NARA" << endl;
		}
		
	}
}

