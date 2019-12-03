#include<iostream>
#include"Time.h"
using namespace std;
int compare()
{
	if(t1.hrs==t2.hrs && t1.min==t2.min && t1.sec==t2.sec)
	{
		cout<<"Both given time is SAME"<<endl;
	}
}
int main(){
	Time t1;
	
	cout<<"Default Time";
	t1.display();
	t1.accept();
	cout<<"Time given by user is: ";
	t1.display();
	
	Time t2;
	t2.accept();
	t2.compare();
	
	return 0;

}

