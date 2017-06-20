#include "bibliotekarz.h"
#include "osoba.h"
#include "abstrakcyjnafabrykaosob.h"
#include <vector>
#include <cstdio>

int main()
{
    std::vector<Osoba*> lista_osob;
    AbstrakcyjnaFabrykaOsob* fabryka1 = AbstrakcyjnaFabrykaOsob::wybierzFabryke(Type_Bibliotekarz);
    lista_osob.push_back(fabryka1->stworzOsobe());
    AbstrakcyjnaFabrykaOsob* fabryka2 = AbstrakcyjnaFabrykaOsob::wybierzFabryke(Type_Uzytkownik);
    lista_osob.push_back(fabryka2->stworzOsobe());
    lista_osob.push_back(fabryka2->stworzOsobe());
    lista_osob.push_back(fabryka2->stworzOsobe());

    Bibliotekarz* mol = new Bibliotekarz("mol", "mol");

    delete fabryka1;
    delete fabryka2;

    mol->usunKonto(lista_osob);
    mol->usunKonto(lista_osob);

    delete mol;

    for(size_t i=0; i<lista_osob.size(); ++i)
    {
        if (lista_osob.at(i) != NULL)
            delete lista_osob.at(i);
    }
    lista_osob.clear();

    return 0;
}
