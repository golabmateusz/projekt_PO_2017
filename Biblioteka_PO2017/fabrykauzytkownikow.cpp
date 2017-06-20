#include "fabrykauzytkownikow.h"
#include "uzytkownik.h"

Osoba* FabrykaUzytkownikow::stworzOsobe()
{
	return new Uzytkownik(podajLogin(), podajHaslo());
}
