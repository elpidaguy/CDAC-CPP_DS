#include<iostream>
#include<string>
#include"PaySlip.h"
using namespace std;

PaySlip::PaySlip():EmpNo(""), EmpName(""), DA(0), HRA(0), BasicSalary(0){};
PaySlip::PaySlip(string EmpNo, string EmpName, int DA, int HRA, int BasicSalary):EmpNo(EmpNo), EmpName(EmpName), DA(DA), HRA(HRA), BasicSalary(BasicSalary){};

void PaySlip::accept()
	{
	cout<<"\nEnter the PaySlip: "<<endl;
	cout<<"Please Enter Employee Number: ";
	cin>>EmpNo;

	cout<<"\nPlease Enter Employee Name: ";
	cin>>EmpName;

	cout<<"\nPlease Enter DA: ";
	cin>>DA;

	cout<<"\nPlease Enter HRA: ";
	cin>>HRA;

	cout<<"\nPlease Enter BasicSalary: ";
	cin>>BasicSalary;

	}

void PaySlip::display() const
{
	cout<<"\nPaySlip is: "<<endl;
	cout<<"Employee No: "<<EmpNo<<endl;
	cout<<"Employee Name: "<<EmpName<<endl;
	cout<<"DA: "<<DA<<endl;
	cout<<"HRA: "<<HRA<<endl;
	cout<<"Basic Salary: "<<BasicSalary<<endl;
}

int PaySlip::calcSalary()
{
	return DA+HRA+BasicSalary;
}

PaySlip::~PaySlip()
{}
