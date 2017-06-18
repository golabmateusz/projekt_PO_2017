#include <iostream>
#include <cstdlib>
#pragma once
#include "abstrakcyjnafabrykaosob.h"
#include "osoba.h"

 class FabrykaUzytkownikow : public AbstrakcyjnaFabrykaOsob
 {
 public:
		virtual Osoba* stworzOsobe();
 };