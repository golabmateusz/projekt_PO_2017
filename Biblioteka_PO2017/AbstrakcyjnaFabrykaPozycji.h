#include <iostream>
#include "Pozycja.h"
#include <vector>
#include <cstdlib>
#pragma once

using namespace std;

class AbstrakcyjnaFabrykaPozycji
{
protected:
	void podajAutora();
	void podajNazwe();
	void podajRokWydania();
  //  void stworzPozycje();
public:
	
         
		 virtual Pozycja * stworzPozycje();
         virtual ~AbstrakcyjnaFabrykaPozycji(){}  ;                   //wirtualny destruktor, bo s¹ wirtualne funkcje

	//Pozycja();
	//~Pozycja();
	//void stworzPozycje();


};
