#include<iostream>
using namespace std;
int bin(int n);
int main()
{
	int n;
cout<<"Enter the number: ";
cin>>n;

bin(n);
return 0;
}

int bin(int n)
{
int binary;
	for(int i=n;i>0;i--)
	{
	binary = i%2;
	cout<<"\t"<<binary;
	i=i/2;
	}
}
