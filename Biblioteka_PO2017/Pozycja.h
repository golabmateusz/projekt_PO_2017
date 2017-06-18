#include <iostream>
#include "stdafx.h"
using namespace std;
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

class Pozycja
{
public:
    Pozycja();
    virtual ~Pozycja();

    int masa() { return this->_masa; } //getter
protected:
    int _masa;
};
*/
class Pozycja {
   protected:   
    string autor;
	string nazwa;
	int rokWydania;
    bool status;
   public:
         virtual void stworzPozycje();// metoda do rysowania obiekt
         // poni�sze metody s� wirtualne, gdy� klasy pochodne nie musz� koniecznie w ten spos�b przechowywa�
         // po�o�enia obiektu, jednak maj� ju� cia�a, gdy� to b�dzie najcz�stszy przypadek
 
         // metoda do ustalania po�o�enia obiektu
         virtual void stworzPozycje(bool status)
		 {
            status = false;         
         }
         // metody do pobierania po�o�enia obiektu
         virtual float dodajPozycje();
         virtual ~Pozycja() {}//wirtualny destruktor, bo s� wirtualne funkcje
};
