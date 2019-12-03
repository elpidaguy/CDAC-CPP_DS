#include<iostream>
#include<string>
#include"Address.h"
using namespace std;

int main(){

	Address defaultAdd("1","SBI","Panchwati","Pune","411000");
	Address a1, a2;
	bool res;

	cout<<"\nDefault Address: ";
	a1.display();
	a1.accept();
	cout<<"Address given by user is: ";
	a1.display();

	a2.accept();
	a2.display();
	res = a2==a1;
	if(res)
	{
		cout<<"\nThe Address are not same"<<endl;
	}
	else
	{
		cout<<"\nThe Address are same"<<endl;
	}
	
	return 0;

}

