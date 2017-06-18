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
         // poni¿sze metody s¹ wirtualne, gdy¿ klasy pochodne nie musz¹ koniecznie w ten sposób przechowywaæ
         // po³o¿enia obiektu, jednak maj¹ ju¿ cia³a, gdy¿ to bêdzie najczêstszy przypadek
 
         // metoda do ustalania po³o¿enia obiektu
         virtual void stworzPozycje(bool status)
		 {
            status = false;         
         }
         // metody do pobierania po³o¿enia obiektu
         virtual float dodajPozycje();
         virtual ~Pozycja() {}//wirtualny destruktor, bo s¹ wirtualne funkcje
};
