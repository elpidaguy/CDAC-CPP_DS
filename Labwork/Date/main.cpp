#include<iostream>
#include"Date.h"
using namespace std;

int main(){
	Date d1, d2;
	
	cout<<"\nDefault Date: ";
	d1.display();
	d1.accept();
	cout<<"Date given by user is: ";
	d1.display();

	d2.accept();
	d2.display();
	d2==d1;
	d2!=d1;
	d2+d1;
	res.display();
	d2-d1;
	
	return 0;

}

