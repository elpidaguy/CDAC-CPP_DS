#include<iostream>
using namespace std;

int main(){
	int count,sum=0;
	int arr[100];
	cout<<"Enter the count of numbers: "<<endl;
	cin>>count;
	cout<<"\nEnter the numbers: ";

	for(int i=0;i<count;i++)
	{
	cin>>arr[i];
	}
	for(int j=0;j<count;j++)
	{
	sum+=arr[j];
	}

	cout<<"Average is: "<<sum/count;
	return 0;
}
