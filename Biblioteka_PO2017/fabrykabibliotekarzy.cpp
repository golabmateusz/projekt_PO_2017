#include "fabrykabibliotekarzy.h"
#include "bibliotekarz.h"

Osoba* FabrykaBibliotekarzy::stworzOsobe()
{
	return new Bibliotekarz();
}