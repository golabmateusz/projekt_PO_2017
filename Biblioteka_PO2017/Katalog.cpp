#include <iostream>
#include "Katalog.h"
#include "logowanie.h"
using namespace std;
/*
void Katalog::wyswietl()
{
   cout<<"Wyswietla wszystkie pozycje :";
   cout<<Pozycja(nazwa*ptr)

   cout << endl << "Prosze bardzo " << numer << " ksiazki" << endl;
  for (int n = 0; n < numer; n++)
    cout << setw(12) << zbior[n].nazwa << setw(6) << " by " << zbior[n].autor() << endl;


}
void Katalog::dodaj(Ksiazka x)
{
    zbior[numer++] = x;
   cout<<"DODAJ POZYCJE!";

}
void Katalog::usun()
{
    for (int n = 0; n < numer; n++)
    if (zbior[n] == x) {
      for (int nn = n + 1; nn < numer; nn++)
        zbior[nn - 1] = zbior[nn];
      cout << x.nazwa << " by " << x.autor << " deleted" << endl;
      --numer;
      return;
    }
  cout << x.nazwa() << " not found" << endl;
   cout<<"USUN POZYCJE";
}

void zbior::run() {
  Katalog kat;
  string nazwa, autor;

  cout << "Podaj autora ";
  cin >> autor;
  cout << "Podaj nazwe";
  cin >> nazwa;
  cout << "Podaj rok";
  cin >> rokWydania;
  cout << "Podaj status";
  cin >> status;
  cout << "Podaj liczbaStron";
  cin >> liczbaStron;

  while (!cin.eof()) {
    kat.dodaj(Ksiazka(autor, nazwa, rokWydania, status, liczbaStron));

  cout << "Podaj autora ";
  cin >> autor;
  cout << "Podaj nazwe";
  cin >> nazwa;
  cout << "Podaj rok";
  cin >> rokWydania;
  cout << "Podaj status";
  cin >> status;
  cout << "Podaj liczbaStron";
  cin >> liczbaStron;
  }
  kat.wyswietl();  // print the library holdings
  kat.dodaj(Book("Tomek", "Einstein"));  // delete if present
  kat.usun(Book("Bend", "Hartley"));      // delete if present
  kat.wyswietl();  // print holdings again to verify deletions
}
*/

Katalog::Katalog()
{
    dostep_do_katalogu();
}

void Katalog::dostep_do_katalogu()
{
    if(&Logowanie::ktojestkto)//uzytkownik
    {
        cout << "katalog user";
    }
    else
    {
        cout << "katalog ten drugi";
    }
}

Katalog::~Katalog()
{/*
    for(size_t i=0; i<this->zbior.size(); ++i)
    {
        delete this->zbior.at(i);
    }
    this->zbior.clear();
    //usuwanie pozycji z wektora
    */
}
/*
void Katalog::manager()
{
    int wybor = 0;
    cout << "\nManager ksiazek!\nWybierz:\n1. Dodaj pozycje\n2. Usun pozycje\n";
    cin>>wybor;
    switch (wybor)
    {
    case 2:
        this->dodaj();
        break;
    default:
        this->usun();
        break;
    }
}
*/
void Katalog::usun(std::string autor, std::string nazwa)
{
    /*
    string haslo = "";
    string login = "";
    cout << "Zaloguj sie\nPodaj login: ";
    cin >> login;
    cout << "\nPodaj haslo: ";
    cin >> haslo;
    cout << "\n";
    this->szukaj(haslo, login);
    */
}

void Katalog::dodaj(std::string autor, std::string nazwa, int rokWydania, std::string status)
{
    /*
    RodzajPozycji typ;
    int wybor = 0;
    cout<< "\nJaka pozycje chcesz dodac:\n1. Ksiazka\n";
    cin >> wybor;
    cout<< "\n";
    switch (wybor)
    {
    case 1:
        typ = Type_Ksiazka;
        break;
    default:
        typ = Type_Ksiazka;
        break;
    }
    AbstrakcyjnaFabrykaPozycji* fabryka = AbstrakcyjnaFabrykaPozycji::wybierzFabryke(typ);
    zbior.push_back(fabryka->stworzPozycje());
    delete fabryka;
    this->manager();
    */
}
void Katalog::oddaj()
{

}

void Katalog::usun_konto()
{

}

void Katalog::wyloguj()
{

}

void Katalog::wypozycz()
{

}
