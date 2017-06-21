#include <iostream>
#include "Katalog.h"
#include "logowanie.h"
#include "bibliotekarz.h"
using namespace std;

Katalog::Katalog(bool kto)
{
	dostep_do_katalogu(kto);
}

void Katalog::dostep_do_katalogu(bool kto)
{
    int wybory = 0;
	if(kto)//uzytkownik
    {
        cout<< "\nWitaj w katalogu uzytkowniku!\nWybierz:\n1. Lista ksiazek\n2. Wypozycz ksiazke\n3. Oddaj ksiazke\n4. Wyloguj\n";
        cin>>wybory;
        switch (wybory)
        {
        case 1:
            this->wyswietl(kto);
             break;
        case 2:
            this->wypozycz(kto);
             break;
        case 3:
            this->oddaj(kto);
             break;
        case 4:
            this->wyloguj(kto);
            break;
        default:
            break;
        }

    }
    else
    {
         cout<< "\nWitaj w katalogu Bibliotekarzu!\nWybierz:\n1. Lista ksiazek\n2. dodaj\n3. Usun ksiazke\n4. Usun konto\n5. Wyloguj\n";
        cin>>wybory;
        switch (wybory)
        {
        case 1:
            this->wyswietl(kto);
             break;
        case 2:
			this -> dodaj(kto);
             break;
        case 3:
            this->usun(kto);
             break;
        case 4:
            this->usun_konto(kto);
            break;
        case 5:
            this->wyloguj(kto);
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
    //usuwanie pozycji z wektora

}

void Katalog::usun(bool kto)
{
     unsigned int wybor = 0;
    std::cout << "Lista pozycji systemie:\n";

    for(size_t i=0; i< zbior.size(); ++i)
    {
        try
        {
            if (zbior.at(i) != NULL)
                std::cout << i <<". "<< zbior.at(i)->nazwa <<" "<<zbior.at(i)-> autor<<" " <<zbior.at(i)-> rokWydania<<" " <<zbior.at(i)-> status <<"\n";
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
        std::cout << "usunieto pozycje " << zbior.at(wybor)-> nazwa << "\n";
        if (zbior.at(wybor) != NULL)
            delete zbior.at(wybor);
        zbior.at(wybor) = NULL;
    }

    else
    {
        std::cout << "nie usunieto zadnej pozycji\n";
    }
	this->dostep_do_katalogu(kto);
}

void Katalog::dodaj(bool kto)
{
    AbstrakcyjnaFabrykaPozycji* fabryka = AbstrakcyjnaFabrykaPozycji::wybierzFabryke(Type_Ksiazka);
    zbior.push_back(fabryka->stworzPozycje());
    delete fabryka;
    this->dostep_do_katalogu(kto);
}
void Katalog::oddaj(bool kto)
{

}

void Katalog::usun_konto(bool kto)
{
	//this->Bibliotekarz:usunKonto();

}

void Katalog::wyloguj(bool kto)
{
	 void logowanie_do_systemu();
	
}

void Katalog::wypozycz(bool kto)
{

}

void Katalog::wyswietl(bool kto)
{
	 unsigned int wybor = 0;
	  std::cout << "Lista pozycji systemie:\n";

    for(size_t i=0; i< zbior.size(); ++i)
    {
        try
        {
            if (zbior.at(i) != NULL)
                std::cout << i <<". "<< zbior.at(i)->nazwa <<" "<<zbior.at(i)-> autor<<" " <<zbior.at(i)-> rokWydania<<" " <<zbior.at(i)-> status <<"\n";
        }
        catch(...)
        {
            std::cout << i << "cos sie zepsulo...\n";
        }
    }

	
    std::cout << "\nWybierz --1-- aby powrocic\n ";
    std::cin >> wybor;
    std::cout << "\n";
    if(wybor==1)
    {
        this->dostep_do_katalogu(kto);
    }

    else
    {
        std::cout << "cos poszlo nie tak....\n";
    }
	//this->dostep_do_katalogu(kto);

}
