#include<iostream>
#include "MyString.h"
using namespace std;
int main()
{
	int n;
	cout<<"\nEnter the size of Pointer: ";
	cin>>n;
	MyString c1(n);
	c1.Accept();
	c1.Display();
	MyString c2(c1);
	c2.Display();
}
