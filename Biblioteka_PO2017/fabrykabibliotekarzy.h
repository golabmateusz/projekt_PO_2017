#include <iostream>
#include <cstdlib>
#pragma once
#include "abstrakcyjnafabrykaosob.h"
#include "osoba.h"

 class FabrykaBibliotekarzy : public AbstrakcyjnaFabrykaOsob
 {
 public:
		Osoba* stworzOsobe();
 };