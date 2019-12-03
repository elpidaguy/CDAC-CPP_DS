#include<iostream>
#include"Date.h"
using namespace std;

Date::Date():dd(10), mm(06), yyyy(1970){};
Date::Date(int dd=0, int mm=0, int yyyy=0): dd(dd), mm(mm), yyyy(yyyy){};

void Date::accept()
	{
	
	cout<<"Please Enter The Date: ";
	cin>>dd;
	if(dd>31){
		cout<<"Date should be less than 31."<<endl;
		cin>>dd;
	}	


	cout<<"\nPlease Enter The Month: ";
	cin>>mm;
	if(mm>12){
		cout<<"Month should be less than 12."<<endl;
		cin>>mm;
	}	


	cout<<"\nPlease Enter The Year: ";
	cin>>yyyy;
	if(yyyy<1970 || yyyy>2030){
		cout<<"Year should be in between range 1970 to 2030."<<endl;
		cin>>yyyy;
	}	

	}

void Date::display() const
{
	cout<<dd<<"/"<<mm<<"/"<<yyyy<<endl<<"\n";

}

/*
void Date::compare(Date d1) 
{
if(d1.dd == this->dd && d1.mm == this->mm, d1.yyyy == this->yyyy)
{
	cout<<"\nBoth the dates are same";
}
else
{
	cout<<"\nThe dates are not same";
}
}; */

int& Date::operator+(Date d1)
{
	int a,b,c;
	//Date sum;
	sum.dd = this->dd + d1.dd;
	sum.mm = this->mm + d1.mm;
	sum.yyyy = this->yyyy + d1.yyyy;

	//return sum;
	
	cout<<"\nAddition of D1 and D2 is: "<<abs(a)<<" days, "<<abs(b)<<" months,  "<<abs(c)<<" years "<<endl;

};

int& Date::operator-(Date d1)
{
	int a,b,c;

	a = this->dd - d1.dd;
	b = this->mm - d1.mm;
	c = this->yyyy - d1.yyyy;
	
	cout<<"\nDifference of D1 and D2 is: "<<abs(a)<<" days, "<<abs(b)<<" months,  "<<abs(c)<<" years "<<endl;

};

int& Date::operator==(Date d1)
{
	cout<<"\nInside operator =="<<endl;
	if(d1.dd == this->dd && d1.mm == this->mm, d1.yyyy == this->yyyy)
	{
		cout<<"\nBoth the dates are same"<<endl;
	}
	else
	{
		cout<<"\nThe dates are not same"<<endl;
	}
};

int& Date::operator!=(Date d1)
{
	cout<<"\nInside operator !="<<endl;
	if(d1.dd != this->dd && d1.mm != this->mm, d1.yyyy != this->yyyy)
	{
		cout<<"\nBoth the dates are same"<<endl;
	}
	else
	{
		cout<<"\nThe dates are not same"<<endl;
	}
};

Date::~Date()
{}
