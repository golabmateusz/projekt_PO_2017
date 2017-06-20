#include "bibliotekarz.h"
#include "logowanie.h"
#include <iostream>
#include <cstdlib>
#include <typeinfo>

Bibliotekarz::Bibliotekarz(std::string login, std::string haslo) : Osoba(login, haslo)
{
    std::cout<<"narodzil sie nam bibliotekarz!\n";
}

Bibliotekarz::~Bibliotekarz()
{
    std::cout<<"koniec bibliotekarza\n";
}

void Bibliotekarz::kimJestes()
{
	std::cout << "konto " << login << " o uprawnieniach bibliotekarza" << "\n";
}

void Bibliotekarz::usunKonto(std::vector<Osoba*> &lista)
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
    if(wybor <= (lista.size()))
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
