#include <iostream>
#include "Pozycja.h"
#include <vector>
using namespace std;


class AbstrakcyjnaFabrykaPozycji
{
	//void podajAutora();
	//void podajNazwe();
	//void podajRokWydania();
     void stworzPozycje();
public:
	//
	 public:
         // metoda do tworzenia instancji obiekt�w
         virtual Pozycja * stworzPozycje (string autor, string nazwa, int rokWydania, bool status);
         virtual ~AbstrakcyjnaFabrykaPozycji(){}                     //wirtualny destruktor, bo s� wirtualne funkcje

	//Pozycja();
	//~Pozycja();
	//void stworzPozycje();


};
