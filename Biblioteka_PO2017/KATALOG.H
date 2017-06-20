#ifndef _KATALOG_H_
#define _KATALOG_H_
#include <iostream>
#include <vector>
#include "POZYCJA.H"
#include "logowanie.h"

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

        Katalog();
        ~Katalog();
        void dostep_do_katalogu();
		void dodaj();
		void usun();
        void oddaj();
		void usun_konto();
		void wyloguj();
		void wypozycz();
        void wyswietl();
};
#endif
