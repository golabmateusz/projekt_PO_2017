#include <iostream>
#include "AbstrakcyjnaFabrykaPozycji.h"
#include "FabrykaKsiazek.h"
using namespace std;

 AbstrakcyjnaFabrykaPozycji* AbstrakcyjnaFabrykaPozycji::wybierzFabryke(RodzajPozycji type)
 {
     switch (type)
     {
     case Type_Ksiazka:

        return new FabrykaKsiazek();

     default:
        return new FabrykaKsiazek();
     }
 }
/*string autor;
string nazwa;
int rokWydania;
bool status;
*/
AbstrakcyjnaFabrykaPozycji::~AbstrakcyjnaFabrykaPozycji()
{

}


string AbstrakcyjnaFabrykaPozycji::podajAutora()
{
    string autor;
    cout << "Podaj autora ksiazki: ";
    cin >> autor;
    cout << "\n";
    return autor;

}

string AbstrakcyjnaFabrykaPozycji::podajNazwe()
{
    string nazwa;
    cout << "Podaj nazwe ksiazki ";
    cin >> nazwa;
    cout << "\n";
    return nazwa;

}

int AbstrakcyjnaFabrykaPozycji::podajRokWydania()
{
    int rokWydania = 0;
    std::cout << "Podaj rok wydania ";
    std::cin >> rokWydania;
    std::cout << "\n";
    return rokWydania;
}

std::string AbstrakcyjnaFabrykaPozycji::podajStatus()
{
    string status;
    std::cout << "Podaj status ";
    std::cin >> status;
    std::cout << "\n";
    return status;
}

/*
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
*/
