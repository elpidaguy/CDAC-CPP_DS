#include<iostream>
using namespace std;
class Complex
{
	//DM
	private:
	int real;
	int img;
	static int count;
	//MF
	public:
	Complex();
	Complex(int dreal, int dimg);
	void Accept();
	void Display() const;
	int GetReal();
 	static int GetCount();
	Complex operator+(const Complex &x);
};

