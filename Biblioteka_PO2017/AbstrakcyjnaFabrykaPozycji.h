#include <iostream>
#include "Pozycja.h"
#include <vector>
using namespace std;


class AbstrakcyjnaFabrykaPozycji
{
	//void podajAutora();
	//void podajNazwe();
	//void podajRokWydania();

public:
	//void stworzPozycje();


	Pozycja();
	~Pozycja();
	void stworzPozycje();


};
class Zwierze
{
public:
    Zwierze();
    virtual ~Zwierze();
    virtual void glos() = 0;
};
class AbstrakcyjnaFabrykaPozycji {
public:
    Pozycja* stworzPozycje();
   

    void rejestrujZygote(Zygota *zygota);
   

    virtual ~AbstrakcyjnaFabrykaPozycji();
   
protected:
    vector<Pozycja*> pozycje;
};