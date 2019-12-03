#include "Complex.h"
Complex::Complex():real(0), img(0)
	{
		count++;
 	cout<<"\n CTOR called";
	}

Complex::Complex(int dreal, int dimg):real(dreal),img(dimg)
	{
		count++;
 	cout<<"\n PARM CTOR called";
	}

	void Complex::Accept()
	{
	cout<<"\n Please enter real part"<<endl;
	cin>>real;
	cout<<"\n Please enter img part"<<endl;
	cin>>img;
	}

	void Complex::Display() const
	{
	cout<<"\n Real="<<this->real;
	cout<<"\n Img="<<this->img<<endl;
	}

	int Complex::GetReal(){
		return real;
	}

	int Complex::GetCount(){
		return count;
	}
//	Complex Complex::Add(const Complex &x)
	Complex Complex::operator+(const Complex &x)
	{
	Complex r;
	r.real = real + x.real;
	r.img = img + x.img;
	return r;

	}






int Complex::count = 0;
