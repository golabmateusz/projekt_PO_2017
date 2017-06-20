#include <iostream>
#include "FabrykaKsiazek.h"
#include "Ksiazka.h"

//using namespace std;

Pozycja* FabrykaKsiazek::stworzPozycje()
{
    return new Ksiazka(podajAutora(), podajNazwe(),podajRokWydania(), podajStatus());
}

/*
void FabrykaKsiazek::stworzPozycje()
{
   cout<<endl<<"Podaj ilosc stron ksiazki: ";
   cin>>liczbaStron;

   Pozycja * stworzPozycje(string autor, string nazwa, int rokWydania, bool status){
            return new Ksiazka(autor, nazwa, rokWydania, status, liczbaStron):Pozycja(int liczbaStron)
   {
      nazwa = nk;
      r = pr;
   };
}
}
FabrykaKsiazek::FabrykaKsiazek(string a,string n,int r,bool s, int ls)
{

	string autor=a;
	string nazwa=n;
	int rokWydania=r;
    bool status=s;
	int liczbaStron=ls;


}


FabrykaKsiazek::~FabrykaKsiazek()
{
   cout<<endl<<"To ja, destruktor sie nazywam";
   cout<<" kasuje obiekty, slowa przepraszam nie uzywam";
}
*/
