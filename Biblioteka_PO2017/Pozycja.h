#include <iostream>
#include "stdafx.h"
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
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
*/
class Pozycja {
protected:   

    virtual ~Pozycja();//wirtualny destruktor, bo s¹ wirtualne funkcje
	virtual void zmienStatus()=0;

public:
	
	string autor;
	string nazwa;
	int rokWydania;
    bool status;
};
