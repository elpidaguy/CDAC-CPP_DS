#include "Complex.h"
int main()
{

	Complex c1(5,5); //old style
	Complex c2{10,10}; // new style
	Complex c3 = c1.operator+(c2);

	c3.Display();

	/*Complex &ref = c2;

	cout<<"\n Add1 = "<<&c2;
	cout<<"\n Add2 = "<<&ref;
	ref.Accept();
	ref.Display();
	c2.Display();*/
	return 0;
}

