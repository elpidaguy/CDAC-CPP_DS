#include<iostream>
using namespace std;

int main(){
	int arr[100], count;
	
	cout<<"Enter the number of elements: ";
	cin>>count;
	cout<<"Enter the elements: ";

	for(int i=0;i<count;i++)
	{
		cin>>arr[i];
	}
	
	for(int j=0;j<count/2;j++)
	{
		arr[j]=arr[j] + arr[count-1-j];
		arr[count-1-j]=arr[j]-arr[count-1-j];
		arr[j]=arr[j]-arr[count-1-j];
	}

	cout<<"\n\n\nReversed Array is: "<<endl;

	for(int k=0;k<count;k++)
	{
		cout<<arr[k]<<"\t";
	}
	return  0;
}
