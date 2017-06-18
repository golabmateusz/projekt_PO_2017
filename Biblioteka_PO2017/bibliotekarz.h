#include <iostream>
#pragma once
#include "osoba.h"

 using namespace std;

 class Bibliotekarz : public Osoba
 {
	 Bibliotekarz();
	 virtual ~Bibliotekarz();
	 virtual void kimJestes();
	 virtual void usunKonto();
 };