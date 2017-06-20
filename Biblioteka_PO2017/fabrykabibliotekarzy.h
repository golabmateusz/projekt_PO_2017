#ifndef _FABRYKABIBLIOTEKARZY_H_
#define _FABRYKABIBLIOTEKARZY_H_
#include "abstrakcyjnafabrykaosob.h"
#include "osoba.h"
#include "bibliotekarz.h"
 class FabrykaBibliotekarzy : public AbstrakcyjnaFabrykaOsob
 {
 public:
	 //Osoba* stworzOsobe();
	 virtual Osoba* stworzOsobe();
    //{
     //   return new Bibliotekarz();
    //}
 };
#endif
