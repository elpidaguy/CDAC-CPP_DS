#include<iostream>
#include<string>
#include "Inventory.h"
using namespace std;

Inventory::Inventory():status(""), qty(0) {};
Inventory::Inventory(string p_status, int p_qty): status(p_status), qty(p_qty){};

void Inventory::Accept()
{
	cout<<"\nEnter Status: ";
	cin>>status;
	cout<<"\nEnter QTY: ";
	cin>>qty;
}

void Inventory::Display() const {
	cout<<"\nInventory is "<<endl;
	cout<<"Status: "<<status<<endl;
	cout<<"QTY: "<<qty<<endl;
}


