#ifndef _FABRYKAUZYTKOWNIKOW_H_
#define _FABRYKAUZYTKOWNIKOW_H_
#include "abstrakcyjnafabrykaosob.h"
#include "osoba.h"
#include "uzytkownik.h"
 class FabrykaUzytkownikow : public AbstrakcyjnaFabrykaOsob
 {
 public:
	 virtual Osoba* stworzOsobe();
	 //{
     //   return new Uzytkownik();
    //}

 };
#endif
