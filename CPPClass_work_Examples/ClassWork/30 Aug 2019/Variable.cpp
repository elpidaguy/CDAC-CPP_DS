#include<iostream>
using namespace std;


	extern int d; //Only declaration //undefined ref error

int main()
{
	//Auto (part of function/ local var)
	
	int a; // Decl + def
	cout<<"\n Add="<<&a;
	int b =0; //Decl + def + init
	cout<<"\n Add="<<&b;
	cout<<"\n"<<a;
	cout<<"\n"<<b;

	int d;// Def of d
	cout<<"\n Add="<<&d;


	int  e; //Decl + def
	cout<<"\n"<<e;
	e = 10; //Assignment
	cout<<"\n"<<e;

	return 0;
}
