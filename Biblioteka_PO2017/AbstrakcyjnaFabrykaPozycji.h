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
         // metoda do tworzenia instancji obiektów
         virtual Pozycja * stworzPozycje (string autor, string nazwa, int rokWydania, bool status);
         virtual ~AbstrakcyjnaFabrykaPozycji(){}                     //wirtualny destruktor, bo s¹ wirtualne funkcje

	//Pozycja();
	//~Pozycja();
	//void stworzPozycje();


};
