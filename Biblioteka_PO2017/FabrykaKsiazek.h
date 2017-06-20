#ifndef _FABRYKAKSIAZEK_H_
#define _FABRYKAKSIAZEK_H_
#include <iostream>
#include "AbstrakcyjnaFabrykaPozycji.h"
#include "Pozycja.h"
#include "Ksiazka.h"

//using namespace std;



class FabrykaKsiazek : public AbstrakcyjnaFabrykaPozycji //klasa FabrykaKsiazek dziedziczy publicznie z klasy AbstrakcyjnaFabrykaPozycji
{
	/*string autor;
	string nazwa;
	int rokWydania;
    bool status;
	int liczbaStron;

   	void podajLiczbeStron();
    */
public:
     virtual Pozycja* stworzPozycje();
	//virtual Pozycja* stworzPozycje();
	//void stworzPozycje(string autor, string nazwa, int rokWydania, bool status, int liczbaStron);//{};




};
#endif
