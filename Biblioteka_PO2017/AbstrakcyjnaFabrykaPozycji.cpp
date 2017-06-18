#include <iostream>
#include "AbstrakcyjnaFabrykaPozycji.h"
using namespace std;


void AbstrakcyjnaFabrykaPozycji::podajAutora()
{

	
}

void AbstrakcyjnaFabrykaPozycji::podajNazwe()
{


}

void AbstrakcyjnaFabrykaPozycji::podajRokWydania()
{


}

void AbstrakcyjnaFabrykaPozycji::stworzPozycje()
{
   cout<<endl<<"Podaj autora: ";
   cin>>autor;
   cout<<endl<<"Podaj tytul ksiazki: ";
   cin>>nazwa;
   cout<<endl<<"Podaj rok wydania: ";
   cin>>rokWydania;
	
}
class Fabryka {
public:
    Pozycja* produkuj()
    {
        return zygoty.at(rand() % zygoty.size()) -> produkuj();
    }

    virtual ~Fabryka()
    {
        for(size_t i=0; i<zygoty.size(); ++i)
            delete zygoty.at(i);
        Pozycja.clear();
    }
protected:
    vector<Pozycja*> pozycje;
};
