#include<iostream>
using namespace std;

int main()
{
	int count;
	char arr[100];
	cout<<"Enter the number of chararcters: ";
	cin>>count;
	cout<<"\nEnter the charcters: "<<endl;
	
for (int i=0;i<count;i++)
	{	
	cin>>arr[i];
	}

cout<<"Array of String is: "<<endl;
for (int j=0;j<count;j++)
	{
	cout<<"\n"<<arr[j];		
	}
	return 0;
}

