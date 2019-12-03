#include<iostream>
#include<string>
#include"PaySlip.h"
using namespace std;

int main(){

	PaySlip defaultPaySlip("1","jannat",18000,5000,25000);
	defaultPaySlip.display();
        PaySlip a1;
	

	cout<<"\nDefault PaySlip: ";
	a1.display();
	a1.accept();
	cout<<"PaySlip given by user is: ";
	a1.display();

	cout<<"\nTotal Salary is: "<<a1.calcSalary()<<endl;


	
	return 0;

}

