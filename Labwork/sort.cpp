#include<iostream>
using namespace std;

int main()
{
int arr[100];
int count,temp;

cout<<"Enter array count: ";
cin>>count;
cout<<"Enter "<<count<<" numbers to sort:";

for(int i=1;i<=count;i++)
{
int n = 0;
cin>>n;
arr[i]=n;
}

for(int i=0;i<count;i++)
{
	if(arr[i]>arr[i+1])
	{
	temp = arr[i];
	arr[i] = arr[i+1];
	arr[i+1]=temp;
	}
}

cout<<"Sorted Numbers are: ";
for(int j=1; j<=count;j++)
{
cout<<"\n"<<arr[j];
}

return 0;
}
