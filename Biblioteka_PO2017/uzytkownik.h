#include <iostream>
#pragma once
#include "osoba.h"

 using namespace std;

 class Uzytkownik : public Osoba
 {
 public:
	 Uzytkownik();
	 virtual ~Uzytkownik();
	 virtual void kimJestes();
	 virtual void oddaj();
	 virtual void wypozycz();
 };
