#include <iostream>
#include <cstdlib>
#pragma once
#include "osoba.h"

 class AbstrakcyjnaFabrykaOsob
 {
 public:
	 virtual Osoba* stworzOsobe() = 0;
	 virtual ~AbstrakcyjnaFabrykaOsob() {};
 protected:
	 int podajHaslo();
	 string podajLogin();
	 void podajRodzajKonta();
 };

