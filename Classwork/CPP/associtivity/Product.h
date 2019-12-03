#ifndef PROD_H
#define PROD_H

#include<iostream>
#include<string>
#include "Inventory.h"

using namespace std;

class Product 
{

	private:
		string name;
		string id;
		Inventory inv;
	public:
		Product();
		Product(string name, string id,Inventory inv);
		void Display() const;
		void Accept();

};

#endif
