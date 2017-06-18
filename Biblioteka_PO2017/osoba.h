#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

 class Osoba
 {
 public:
	 virtual ~Osoba();
	 virtual void kimJestes() = 0;
 protected:
	 int haslo;
	 string login;
	 bool typKonta;
 };