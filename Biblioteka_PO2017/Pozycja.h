#include <iostream>
#include "stdafx.h"
using namespace std;

class Pozycja
{
	
	string autor;
	string nazwa;
	int rokWydania;
    bool status;

public:

	Pozycja(string="none", string="none", int=9999, bool=false);

   
   Pozycja();

   virtual ~Pozycja();
   void zmienStatus();



};

class Pozycja
{
public:
    Pozycja();
    virtual ~Pozycja();

    int masa() { return this->_masa; } //getter
protected:
    int _masa;
};

