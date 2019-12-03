#include<iostream>
#include<string>
#include"Address.h"
using namespace std;

Address::Address():houseNo(""), colony(""), area(""), city(""), pincode(""){};
Address::Address(string houseNo="", string colony="", string area="", string city="", string pincode=""):houseNo(houseNo), colony(colony), area(area), city(city), pincode(pincode){};

void Address::accept()
	{
	cout<<"\nEnter the Address: "<<endl;
	cout<<"Please Enter House No: ";
	cin>>houseNo;

	cout<<"\nPlease Enter Colony: ";
	cin>>colony;

	cout<<"\nPlease Enter Area: ";
	cin>>area;

	cout<<"\nPlease Enter City: ";
	cin>>city;

	cout<<"\nPlease Enter Pincode: ";
	cin>>pincode;

	}

void Address::display() const
{
	cout<<"\nAddress is: "<<endl;
	cout<<"House No: "<<houseNo<<endl;
	cout<<"Colony: "<<colony<<endl;
	cout<<"Area: "<<area<<endl;
	cout<<"City: "<<city<<endl;
	cout<<"Pincode: "<<pincode<<endl;
}

bool Address::operator==(Address a1)
{

	return a1.houseNo.compare(this->houseNo) && a1.colony.compare(this->colony) && a1.area.compare(this->area) && a1.city.compare(this->city) && a1.pincode.compare(this->pincode);

/*
	if( a1.houseNo.compare(this->houseNo) && a1.colony.compare(this->colony) && a1.area.compare(this->area) && a1.city.compare(this->city) && a1.pincode.compare(this->pincode))
	if( a1.houseNo == this->houseNo && a1.colony == this->colony && a1.area == this->area && a1.city == this->city && a1.pincode == this->pincode ) //loose comparison
	{
		cout<<"\nBoth the Address are not same"<<endl;
	}
	else
	{
		cout<<"\nThe Address are same"<<endl;
	} */
};

Address::~Address()
{}
