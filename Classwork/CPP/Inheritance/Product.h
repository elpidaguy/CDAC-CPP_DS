#ifndef PROD_H
#define PROD_H

#include<iostream>
#include<string>
#include "Inventory.h"

using namespace std;

class Product: public Inventory 
{

	private:
		string name;
		string id;
	public:
		Product();
		Product(string name, string id);
		void Display() const;
		void Accept();

};

#endif
