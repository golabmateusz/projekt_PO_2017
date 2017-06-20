#ifndef _ABSTRAKCYJNAFABRYKAOSOB_H_
#define _ABSTRAKCYJNAFABRYKAOSOB_H_
#include <iostream>
#include <cstdlib>
#include "osoba.h"
enum RodzajKonta
{
    Type_Bibliotekarz,
    Type_Uzytkownik
};

 class AbstrakcyjnaFabrykaOsob
 {
 public:
     static AbstrakcyjnaFabrykaOsob* wybierzFabryke(RodzajKonta type);
	 virtual Osoba* stworzOsobe() = 0;
	 virtual ~AbstrakcyjnaFabrykaOsob() {};
 protected:
	 std::string podajHaslo();
	 std::string podajLogin();
	 //bool podajRodzajKonta();
 };

#endif
