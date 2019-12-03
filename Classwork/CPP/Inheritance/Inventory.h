#ifndef INV_H
#define INV_H

#include<iostream>
#include<string>

using namespace std;

class Inventory 
{

	private:
		string status;
		int qty;
	public:
		Inventory();
		Inventory(string status, int qty);
		virtual void Accept();
		virtual void Display() const;
};

#endif
