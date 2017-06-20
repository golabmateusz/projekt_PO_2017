#include <iostream>
#include <cstdlib>
#include "osoba.h"
#include "abstrakcyjnafabrykaosob.h"
#include "fabrykabibliotekarzy.h"
#include "fabrykauzytkownikow.h"
#include "bibliotekarz.h"
#include "uzytkownik.h"
#include "logowanie.h"
//#include "Pozycja.h"
//#include "Ksiazka.h"
//#include "Katalog.h"
//#include "FabrykaKsiazek.h"
//#include "AbstrakcyjnaFabrykaPozycji.h"

using namespace std;

int main()
{
    Logowanie* log = new Logowanie();

    delete log;

	return 0;
}

