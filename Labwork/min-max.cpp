#include<iostream>
using namespace std;

int minmax(int arr[], int count);
int main(){
	int count;
	int arr[100];
	cout<<"Enter the count of numbers: "<<endl;
	cin>>count;
	cout<<"Enter the numbers: ";

for (int i=0;i<count;i++)
{
	cin>>arr[i];
}
	minmax(arr, count);
	return 0;
}

int minmax(int arr[],int count){
	int min=arr[0],max=0,min2=0,max2=0;
	for(int j=0;j<count;j++)
	{
	if(arr[j]>max)
	{ 
		max2=max;
		max=arr[j];
	}
	if (arr[j]<min)
	{
		min2=min;
		min=arr[j];
	}
}
	cout<<"\nMax is: "<<max;
	cout<<"\nSecond Max is: "<<max2;
	cout<<"\nMin is: "<<min;
	cout<<"\nSecond Min is: "<<min2;
}
