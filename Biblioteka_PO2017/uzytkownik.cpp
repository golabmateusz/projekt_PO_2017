#include "uzytkownik.h"

Uzytkownik::Uzytkownik(std::string login, std::string haslo) : Osoba(login, haslo)
{
    std::cout<<"mamy uzytkownika\n";
}

Uzytkownik::~Uzytkownik()
{
    std::cout<<"koniec uzytkownika\n";
}

bool Uzytkownik::kimJestes()
{
	return true;
}

//void Uzytkownik::oddaj()
//{
//}

//void Uzytkownik::wypozycz()
//{
//}
