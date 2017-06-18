#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

 class Osoba
 {
	 friend class AbstrakcyjnaFabrykaOsob;
 public:
	 virtual ~Osoba();
	 virtual void kimJestes() = 0;
 protected:
	 int haslo;
	 std::string login;
	 bool typKonta;
 };