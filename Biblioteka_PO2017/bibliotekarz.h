#include <iostream>
#pragma once
#include "osoba.h"

 class Bibliotekarz : public Osoba
 {
	 Bibliotekarz();
	 virtual ~Bibliotekarz();
	 virtual void kimJestes();
	 virtual void usunKonto();
 };