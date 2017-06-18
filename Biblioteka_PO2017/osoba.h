#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

 using namespace std;

 class Osoba
 {
 public:
	 Osoba();
	 virtual ~Osoba();
	 virtual void kimJestes() = 0;
 protected:
	 int haslo;
	 string login;
	 bool typKonta;
 };