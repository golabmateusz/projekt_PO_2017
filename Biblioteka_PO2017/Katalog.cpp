#include <iostream>
#include "Katalog.h"
#include "logowanie.h"
using namespace std;

Katalog::Katalog()
{
    dostep_do_katalogu();
}

void Katalog::dostep_do_katalogu()
{
    int wybory = 0;
    if(&Logowanie::ktojestkto)//uzytkownik
    {
        cout << "katalog user";

        cout<< "\nWitaj w katalogu uzytkowniku!\nWybierz:\n1. Lista ksiazek\n2. Wypozycz ksiazke\n3. Oddaj ksiazke\n4. Wyloguj\n";
        cin>>wybory;
        switch (wybory)
        {
        case 1:
            this->wyswietl();
             break;
        case 2:
            this->wypozycz();
             break;
        case 3:
            this->oddaj();
             break;
        case 4:
            this->wyloguj();
            break;
        default:
            break;
        }

    }
    else
    {
        cout << "katalog ten drugi";
         cout<< "\nWitaj w katalogu Bibliotekarzu!\nWybierz:\n1. Lista ksiazek\n2. Zmien status/wypozycz\n3. Usun ksiazke\n4. Usun konto\n5. Wyloguj\n";
        cin>>wybory;
        switch (wybory)
        {
        case 1:
            this->wyswietl();
             break;
        case 2:
           // this->zmienStatus();
             break;
        case 3:
            this->usun();
             break;
        case 4:
            this->usun_konto();
            break;
        case 5:
            this->wyloguj();
            break;
        default:
            break;
        }
    }
}

Katalog::~Katalog()
{
    for(size_t i=0; i<this->zbior.size(); ++i)
    {
        if (this->zbior.at(i) != NULL)
            delete this->zbior.at(i);
    }
    this->zbior.clear();
    //usuwanie osob z wektora

}

void Katalog::usun(std::vector<Pozycja*> &zbior)
{
     unsigned int wybor = 0;
    std::cout << "Lista pozycji systemie:\n";

    for(size_t i=0; i< zbior.size(); ++i)
    {
        try
        {
            if (zbior.at(i) != NULL)
                std::cout << i <<". "<< zbior.at(i)->login <<"\n";
        }
        catch(...)
        {
            std::cout << i << "cos sie zepsulo...\n";
        }
    }
    std::cout << "\nWybierz nr pozycji, ktora chcesz usunac, lub wartosc spoza zakresu aby zakonczyc: ";
    std::cin >> wybor;
    std::cout << "\n";
    if(wybor < (zbior.size()))
    {
        std::cout << "usunieto konto " << zbior.at(wybor)-> login << "\n";
        if (zbior.at(wybor) != NULL)
            delete zbior.at(wybor);
        zbior.at(wybor) = NULL;
    }

    else
    {
        std::cout << "nie usunieto zadnej pozycji\n";
    }

}

void Katalog::dodaj()
{
    RodzajPozycji typ;
    int wybor = 0;
     cout<< "\nDodawanie pozycji:k\n";
    cout<< "\nJesli chcesz dodac nowa Ksiazke do kolekcji nacisnij 1 \n";
    cin >> wybor;
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
    this->dostep_do_katalogu();

}
void Katalog::oddaj()
{

}

void Katalog::usun_konto(std::vector<Osoba*> &lista)
{
     unsigned int wybor = 0;
    std::cout << "Lista loginow kont w systemie:\n";

    for(size_t i=0; i< lista.size(); ++i)
    {
        try
        {
            if (lista.at(i) != NULL)
                std::cout << i <<". "<< lista.at(i)->login <<"\n";
        }
        catch(...)
        {
            std::cout << i << "cos sie zepsulo...\n";
        }
    }
    std::cout << "\nWybierz nr konta ktore chcesz usunac, lub wartosc spoza zakresu aby zakonczyc: ";
    std::cin >> wybor;
    std::cout << "\n";
    if(wybor < (lista.size()))
    {
        std::cout << "usunieto konto " << lista.at(wybor)-> login << "\n";
        if (lista.at(wybor) != NULL)
            delete lista.at(wybor);
        lista.at(wybor) = NULL;
    }

    else
    {
        std::cout << "nie usunieto zadnego konta\n";
    }

}

void Katalog::wyloguj()
{

}

void Katalog::wypozycz()
{

}
