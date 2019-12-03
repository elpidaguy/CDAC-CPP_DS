#include<iostream>
#include"Time.h"
using namespace std;
	
Time::Time()

{
	
	hrs=12;
	min=12;
	sec=12;

}

void Time::accept()
	{
	
	cout<<"Please Enter Time: ";
	cin>>hrs;
	if(hrs>12){
		cout<<"Hours should be less than 12. Please enter correct hours."<<endl;
		cin>>hrs;
	}	


	cout<<"\nPlease Enter Min after "<<hrs<<": ";
	cin>>min;
	if(min>61){
		cout<<"Minutes should be less than 60. Please enter correct minutes."<<endl;
		cin>>min;
	}	



	cout<<"\nPlease Enter Sec after "<<hrs<<":"<<min<<": ";
	cin>>sec;
	if(sec>60){
		cout<<"Seconds should be less than 60. Please enter correct seconds."<<endl;
		cin>>sec;
	}	

	}

void Time::display()
{
	cout<<hrs<<":"<<min<<":"<<sec<<endl;

}
