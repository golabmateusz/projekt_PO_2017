#include <iostream>
#include "Pozycja.h"
using namespace std;


class Ksiazka : public Pozycja //klasa Ksiazka dziedziczy publicznie z klasy Pozycja
{
   	 int liczbaStron;

public:
	 //Ksiazka(string autor, string nazwa, int rokWydania, bool status, int liczbaStron);
     //virtual ~Ksiazka();
	 //irtual Pozycja * produkuj() { return new Ksiazka(); }
 /////////////

	  Ksiazka (string autor, string nazwa, int rokWydania, bool status, int liczbaStron){}
	 // :Pozycja(autor, nazwa, rokWydania, status)
	  virtual ~Ksiazka();
};

