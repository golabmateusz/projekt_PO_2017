#ifndef _KSIAZKA_H
#define _KSIAZKA_H
#include <iostream>
#include "Pozycja.h"

//using namespace std;


class Ksiazka : public Pozycja //klasa Ksiazka dziedziczy publicznie z klasy Pozycja
{
   	 //int liczbaStron;

public:
	 //Ksiazka(string autor, string nazwa, int rokWydania, bool status, int liczbaStron);
     //virtual ~Ksiazka();
	 //irtual Pozycja * produkuj() { return new Ksiazka(); }
 /////////////
     // bool operator==(Ksiazka) { return nazwa == x.nazwa; }
	  Ksiazka (std::string autor, std::string nazwa, int rokWydania, std::string status);
	 // :Pozycja(autor, nazwa, rokWydania, status)
	  virtual ~Ksiazka();
	  virtual std::string zmienStatus();

};

#endif
