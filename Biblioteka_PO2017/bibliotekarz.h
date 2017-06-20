#ifndef _BIBLIOTEKARZ_H
#define _BIBLIOTEKARZ_H
#include <vector>
#include <cstdio>
#include "osoba.h"
 class Bibliotekarz : public Osoba
 {
 public:
	 Bibliotekarz(std::string login, std::string haslo);
	 virtual ~Bibliotekarz();
	 virtual bool kimJestes();

	 virtual void usunKonto(std::vector<Osoba*> &lista);
 };

#endif
