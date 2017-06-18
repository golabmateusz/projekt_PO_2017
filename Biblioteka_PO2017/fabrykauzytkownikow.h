#include <iostream>
#pragma once
#include "abstrakcyjnafabrykaosob.h"

 using namespace std;

 class FabrykaUzytkownikow : public AbstrakcyjnaFabrykaOsob
 {
 public:
	 virtual Osoba * stworzOsobe();
 };