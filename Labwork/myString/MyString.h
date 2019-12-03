#include<iostream>
using namespace std;
class MyString
{ 
    private:
    char *p;
    int size;

public:
                MyString();
		MyString(int new_size);
		
		MyString(const MyString &x);
		void Display();
		void Accept();


		~MyString();
};



