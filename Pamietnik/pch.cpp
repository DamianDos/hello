// pch.cpp: plik źródłowy odpowiadający wstępnie skompilowanemu nagłówkowi, niezbędny do powodzenia kompilacji

#include "pch.h"
#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <windows.h>

using namespace std;
int wybor;
int dzien;
int miesiac;
int rok;
int godzina;
int minuta;
void menu()
{
	int wybor;
	std::cout << "--------------------" << endl;
	std::cout << "-----MENU GLOWNE----" << endl;
	std::cout << "--------------------" << endl;
	std::cout << "1----DODAJ WPIS------" << endl;
	std::cout << "2-------USUN --------" << endl;
	std::cout << "3--WYJDZ Z PROGRAMU--" << endl;
	std::cout << "--------------------" << endl;
	std::cout << "--------------------" << endl;
	cout << "Twoj wybor :";
	cin >> wybor;

	switch (wybor) {

	case 1: dodaj_wpis();
		break;
	case 2: usun_wpis();
		break;
	/*case 3: usun_wpis();
		break;*/
	case 3:	cout << "Wychodzisz z programu " << endl;
		exit(0);
		Sleep(1000);
		system("pause");
		break;
	}
}
	void dodaj_wpis()
{

		cout << " Dodawanie nowej daty do pamieci" << endl;
		cout << " Dzien : ";			cin >> dzien;
		cout << " Miesiac :  ";			cin >> miesiac;
		cout << " Rok ? :  ";			cin >> rok;
		cout << " Godzina : ";		    cin >> godzina;
		cout << " Minuta ? :  ";        cin >> minuta;
		cout << endl;
		cout << "Ok to juz wszystko" << endl;
		cout << endl;
		fstream plik; plik.open("notatka.txt", ios::out|ios::app);//ios::out
		plik << dzien << endl;
		plik << miesiac << endl;
		plik << rok << endl;
		plik << godzina << endl;
		plik << minuta << endl;
		plik << endl;
		plik.close();
	
		menu();

}

	void pokaz_wpis()
	{

		fstream plik; plik.open("notatka.txt", ios::in);
		cout << dzien << endl;
		cout << miesiac  << endl;
		cout << rok << endl;
		cout << godzina << endl;
		cout << minuta << endl;
		cout << endl;
		plik.close();

		menu();
	}
void usun_wpis()
{

	cout << "Usunieto wpis z pamieci " << endl;

}

// Ogólnie rzecz biorąc, zignoruj ten plik, ale miej go pod ręką, jeśli używasz wstępnie skompilowanych nagłówków.
