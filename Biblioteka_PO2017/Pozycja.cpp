#include <iostream>
#include "Pozycja.h"
using namespace std;


Pozycja::Pozycja() : autor(""), nazwa(""), rokWydania(), status("false")
{


}
Pozycja::Pozycja(std::string autor, std::string nazwa, int rokWydania, std::string status) : autor(autor), nazwa(nazwa), rokWydania(rokWydania), status(status)
{


}
Pozycja::~Pozycja()
{

}
