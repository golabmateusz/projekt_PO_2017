#include "uzytkownik.h"
#include <iostream>
#include <cstdio>
#include <string>

Uzytkownik::Uzytkownik(std::string login, std::string haslo) : Osoba(login, haslo)
{
    std::cout<<"mamy uzytkownika\n";
}

Uzytkownik::~Uzytkownik()
{
    std::cout<<"koniec uzytkownika\n";
}

void Uzytkownik::kimJestes()
{
	std::cout << "konto " << login << " o uprawnieniach uzytkownika" << "\n";
}

void Uzytkownik::oddaj()
{
}

void Uzytkownik::wypozycz()
{
}
