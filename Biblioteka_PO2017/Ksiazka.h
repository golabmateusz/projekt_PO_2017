#include <iostream>
#include "Pozycja.h"
using namespace std;


class Ksiazka : public Pozycja //klasa Ksiazka dziedziczy publicznie z klasy Pozycja
{
   	 int liczbaStron;

public:
	 Ksiazka(int=0);
     virtual ~Ksiazka();
	 virtual Pozycja * produkuj() { return new Ksiazka(); }
 /////////////
};

