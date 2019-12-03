#include<iostream>
#include<string>
using namespace std;
class Address
{

	private:
	string  house;
	string  area;
	string  city;


	public:
	Address():house(""),area(""), city(""){
		cout<<"\n Address::CTOR"<<endl;
	}

	void Accept(){
	cout<<"\n Enter house"<<endl;
	cin>>house;
	cout<<"\n Enter area"<<endl;
	cin>>area;
	cout<<"\n Enter city"<<endl;
	cin>>city;

	}

	void Display(){
	cout<<"\n House="<<house<<endl;
	cout<<"\n Area="<<area<<endl;
	cout<<"\n City="<<city<<endl;
	}


};

