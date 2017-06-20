#ifndef _OSOBA_H_
#define _OSOBA_H_
//#include "bibliotekarz.h"
#include <iostream>
#include <cstdlib>
class Osoba
 {
	 friend class Logowanie;
	 	 friend class Bibliotekarz;
	 //friend void Bibliotekarz::usunKonto();
 public:
     Osoba();
     Osoba(std::string login, std::string haslo);
	 virtual ~Osoba();
	 virtual void kimJestes() = 0;
 protected:
     std::string login;
	 std::string haslo;

	 //bool typKonta;
 };
#endif
