#include <iostream>
#pragma once
#include "abstrakcyjnafabrykaosob.h"

 using namespace std;

 class FabrykaBibliotekarzy : public AbstrakcyjnaFabrykaOsob
 {
 public:
	 virtual Osoba * stworzOsobe();
 };