#ifndef _KATALOG_H_
#define _KATALOG_H_
#include <iostream>
#include <vector>
#include "POZYCJA.H"
#include "logowanie.h"
#include "AbstrakcyjnaFabrykaPozycji.h"

/*
class zbior {
private:
  Katalog kat;
public:
  void run();
};
*/
class Katalog
{
protected:
  std::vector<Pozycja*> zbior;
   //int numer;
public:

        Katalog(bool kto);
        ~Katalog();
        void dostep_do_katalogu(bool kto);
		void dodaj(bool kto);
		void usun(bool kto);
        void oddaj(bool kto);
		void usun_konto(bool kto);
		void wyloguj(bool kto);
		void wypozycz(bool kto);
        void wyswietl(bool kto);
};
#endif
