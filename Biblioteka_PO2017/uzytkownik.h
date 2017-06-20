#ifndef _UZYTKOWNIK_H_
#define _UZYTKOWNIK_H_
#include "osoba.h"
 class Uzytkownik : public Osoba
 {
 public:
	 Uzytkownik(std::string login, std::string haslo);
	 virtual ~Uzytkownik();
	 virtual void kimJestes();
	 virtual void oddaj();
	 virtual void wypozycz();
 };
#endif
