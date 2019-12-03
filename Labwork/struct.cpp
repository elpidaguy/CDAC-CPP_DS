#include <iostream>
#include <cstring>

using namespace std;

struct student
{
  int rollno;
  char name[20];
  float perc;
};

int main(){

	struct student stud[5];
  	int i;

	for(i=0; i<5; i++){
		cout<<"Enter roll no: ";
		cin>>stud[i].rollno;
		cout<<"\nEnter name: ";
		cin>>stud[i].name;
		cout<<"\nEnter percentage: ";
		cin>>stud[i].perc;
		cout<<"\n***********************************************\n";
	}

	for(i=0; i<5; i++){
		cout<<"Roll no : "<<stud[i].rollno<<endl;
		cout<<"Name : "<<stud[i].name<<endl;
		cout<<"Percentage : "<<stud[i].perc<<endl;
	}
	return 0;
}
