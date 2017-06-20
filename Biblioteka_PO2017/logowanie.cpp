#include "logowanie.h"

using namespace std;

Logowanie::Logowanie()
{
    this->logowanie_do_systemu();
}

Logowanie::~Logowanie()
{
    for(size_t i=0; i<this->lista_osob.size(); ++i)
    {
        if (this->lista_osob.at(i) != NULL)
            delete this->lista_osob.at(i);
    }
    this->lista_osob.clear();
    //usuwanie osob z wektora
}

void Logowanie::logowanie_do_systemu()
{
    int wybor = 0;
    cout << "\nWitaj w bibliotece!\nWybierz:\n1. Logowanie\n2. Nowe konto\n";
    cin>>wybor;
    switch (wybor)
    {
    case 2:
        this->nowe_konto();
        break;
    default:
        this->podaj_login_haslo();
        break;
    }
}

void Logowanie::podaj_login_haslo()
{
    string haslo = "";
    string login = "";
    cout << "Zaloguj sie\nPodaj login: ";
    cin >> login;
    cout << "\nPodaj haslo: ";
    cin >> haslo;
    cout << "\n";
    this->szukaj(haslo, login);
}

void Logowanie::nowe_konto()
{
    RodzajKonta typ;
    int wybor = 0;
    cout<< "\nWybierz typ konta:\n1. Bibliotekarz\n2. Uzytkownik\n";
    cin >> wybor;
    cout<< "\n";
    switch (wybor)
    {
    case 1:
        typ = Type_Bibliotekarz;
        break;
    default:
        typ = Type_Uzytkownik;
        break;
    }
    AbstrakcyjnaFabrykaOsob* fabryka = AbstrakcyjnaFabrykaOsob::wybierzFabryke(typ);
    lista_osob.push_back(fabryka->stworzOsobe());
    delete fabryka;
    this->logowanie_do_systemu();
}

void Logowanie::szukaj(std::string h, std::string l)
{
    bool zalogowano = false;
    for(size_t i=0; i<lista_osob.size(); ++i)
    {
        if(lista_osob.at(i)->login == l)
        {
            if(lista_osob.at(i)->haslo == h)
            {
                cout << "Zalogowano!\n";
                zalogowano = true;
                aktualna_osoba = lista_osob.at(i);
                break;
            }
            else
            {
                cout << "Niepoprawne haslo lub ";
                break;
            }
        }
    }
    if(!zalogowano)
    {
        cout<<"brak takiego konta!\n";
        this->logowanie_do_systemu();
    }
}
