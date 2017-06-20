#include <iostream>
#include "Ksiazka.h"
using namespace std;

Ksiazka::Ksiazka(std::string autor, std::string nazwa, int rokWydania, std::string status):Pozycja(autor, nazwa, rokWydania, status)
{
 cout << "elo to ja ksiazka\n";


}

Ksiazka::~Ksiazka()
{
    cout << "ksiazka is dead!\n";
}

string Ksiazka::zmienStatus()
{
    return "fake ret 2";
}

