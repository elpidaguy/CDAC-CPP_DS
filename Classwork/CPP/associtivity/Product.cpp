#include<iostream>
#include<string>
#include "Product.h"
#include "Inventory.cpp"
using namespace std;

Product::Product():name(""), id(""){};
Product::Product(string p_name,string p_id,Inventory p_inv):name(p_name), id(p_id), inv(p_inv){};

void Product::Accept()
{
	cout<<"\nEnter Product Info: "<<endl;
	cout<<"\nEnter Product Name: ";
	cin>>name;
	cout<<"\nEnter Product Id: ";
	cin>>id;
	inv.Accept();
}

void Product::Display() const
{
	cout<<"\nProduct Info: ";
	cout<<"\nProduct Name: "<<name;
	cout<<"\nProduct ID: "<<id;
	inv.Display();
}
