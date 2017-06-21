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
    
    void logowanie_do_systemu();
	bool getter_ktojestkto();
protected:
	bool ktojestkto;
	Osoba* aktualna_osoba;
    std::vector<Osoba*> lista_osob;
    void podaj_login_haslo();
    void nowe_konto();
    void szukaj(std::string h, std::string l);
};

#endif // LOGOWANIE_H_INCLUDED
