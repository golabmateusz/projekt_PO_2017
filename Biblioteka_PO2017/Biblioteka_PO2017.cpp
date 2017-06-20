#include <iostream>
#include <cstdlib>
#include "osoba.h"
#include "abstrakcyjnafabrykaosob.h"
#include "fabrykabibliotekarzy.h"
#include "fabrykauzytkownikow.h"
#include "bibliotekarz.h"
#include "uzytkownik.h"
#include "logowanie.h"
#include "POZYCJA.H"
#include "KSIAZKA.H"
#include "KATALOG.H"
#include "FabrykaKsiazek.h"
#include "AbstrakcyjnaFabrykaPozycji.h"

using namespace std;

int main()
{
    Logowanie* log = new Logowanie();
    Katalog* katalog = new Katalog();

    delete katalog;
    delete log;

    //test area
    /*
    AbstrakcyjnaFabrykaPozycji* fabryka = AbstrakcyjnaFabrykaPozycji::wybierzFabryke(Type_Ksiazka);
    Pozycja* ksiazka1 = fabryka->stworzPozycje();

    delete fabryka;
    delete ksiazka1;
    */
	return 0;
}

