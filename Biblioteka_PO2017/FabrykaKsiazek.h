#include <iostream>
#include "AbstrakcyjnaFabrykaPozycji.h"
#pragma once
using namespace std;



class FabrykaKsiazek : public AbstrakcyjnaFabrykaPozycji //klasa FabrykaKsiazek dziedziczy publicznie z klasy AbstrakcyjnaFabrykaPozycji
{
	string autor;
	string nazwa;
	int rokWydania;
    bool status;
	int liczbaStron;

   	void podajLiczbeStron();

public:
	Pozycja * stworzPozycje(string autor, string nazwa, int rokWydania, bool status, int liczbaStron){};
	


 /////////////

};
