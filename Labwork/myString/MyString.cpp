#include<iostream>
#include "MyString.h"
using namespace std;
    
                MyString::MyString(){};
		MyString::MyString(int new_size):size(new_size),p(new char[new_size]){};
		
	 	MyString::MyString(const MyString &x)
		{
			this->size = x.size;
			this->p = new char[size];
			for(int i = 0; i < size; i++)
			{	
				p[i] = x.p[i];
			}

		}; 
		void MyString::Accept()
		{
			cout<<"\nEnter the Name: ";
			for(int i=0;i<size;i++)
			{
				cin>>p[i];
			}
		}

		void MyString::Display()
		{
			cout<<"\nEntered Name is: ";

			for(int i=0;i<size;i++)
			{
				cout<<p[i];
			}
		}


		MyString::~MyString()
		{
			delete []p;
		}
