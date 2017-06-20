#ifndef _ABSTRAKCYJNAFABRYKAPOZYCJI_H_
#define _ABSTRAKCYJNAFABRYKAPOZYCJI_H_
#include <iostream>
#include "Pozycja.h"

#include <cstdlib>


//using namespace std;

enum RodzajPozycji
{
    Type_Ksiazka

};
class AbstrakcyjnaFabrykaPozycji
{
public:
    static AbstrakcyjnaFabrykaPozycji* wybierzFabryke(RodzajPozycji type);

		 virtual Pozycja * stworzPozycje()=0;
         virtual ~AbstrakcyjnaFabrykaPozycji();                   //wirtualny destruktor, bo s¹ wirtualne funkcje

	//Pozycja();
	//~Pozycja();
	//void stworzPozycje();

protected:
	std::string podajAutora();
	std::string podajNazwe();
	int podajRokWydania();
	std::string podajStatus();
  //  void stworzPozycje();


};
#endif
