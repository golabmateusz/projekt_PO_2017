#include <iostream>
 using namespace std;

 class AbstrakcyjnaFabrykaOsob
 {
 public:
	 virtual ~AbstrakcyjnaFabrykaOsob();
	 virtual Osoba * stworzOsobe() = 0;
 protected:
	 int podajHaslo();
	 string podajLogin();
	 void podajRodzajKonta();
 };