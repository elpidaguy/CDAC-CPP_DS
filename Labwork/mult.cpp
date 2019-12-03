#include<iostream>
using namespace std;

int multiply(int n);

int main(){
	int res[100],arr[100],count;
 	cout<<"Enter the count of numbers: "<<endl;
	cin>>count;
	cout<<"Enter numbers: ";

for(int i=0;i<count;i++)
	{
		cin>>arr[i];
	}

for(int j=0;j<count;j++)
	{
		res[j]=multiply(arr[j]);
	}

cout<<"Result Array is: ";
for(int k=0;k<count;k++)
{
cout<<"\n"<<res[k];
}

return 0;
}

int multiply(int n)
{
return n*2;
}
