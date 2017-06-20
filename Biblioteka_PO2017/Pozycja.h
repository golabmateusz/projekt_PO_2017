#ifndef _POZYCJA_H_
#define _POZYCJA_H_
#include <iostream>
#include <cstdlib>
#include <string>

//using namespace std;
/*{
 AbstrakcyjnaFabrykaPozycji* fabryka1 = AbstrakcyjnaFabrykaPozycji::wybierzFabryke(Type_Ksiazka);
    Osoba* ksiazka = fabryka1->stworzPozycje();




    delete ksiazka;
    delete fabryka1;
}
*/
class Pozycja {
     friend class AbstrakcyjnaFabrykaPozycji;
	 friend class Katalog;

public:
     Pozycja();
     Pozycja(std::string autor, std::string nazwa, int rokWydania, std::string status);
	 virtual ~Pozycja();
	 virtual std::string zmienStatus()=0;
protected:

    std::string autor;
	std::string nazwa;
	int rokWydania;
    std::string status;
    std::string oddana_wypozyczona;
};
/*
class Pozycja
{

	string autor;
	string nazwa;
	int rokWydania;
    bool status;

public:

	Pozycja(string="none", string="none", int=9999, bool=false);


   Pozycja();

   virtual ~Pozycja();
   void zmienStatus();



};
*/
#endif
