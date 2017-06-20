#ifndef LOGOWANIE_H_INCLUDED
#define LOGOWANIE_H_INCLUDED
#include <vector>
#include <cstdio>
#include "osoba.h"
#include "abstrakcyjnafabrykaosob.h"

class Logowanie
{
    friend class Bibliotekarz;
public:
    Logowanie();
    ~Logowanie();
    Osoba* aktualna_osoba;
    void logowanie_do_systemu();
protected:
    std::vector<Osoba*> lista_osob;
    void podaj_login_haslo();
    void nowe_konto();
    void szukaj(std::string h, std::string l);
};

#endif // LOGOWANIE_H_INCLUDED
