#include <iostream>
#include "AbstrakcyjnaFabrykaPozycji.h"
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

	void stworzPozycje();


 /////////////

};
