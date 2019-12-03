#include<iostream>
using namespace std;
int perfect(int n);

int main()
{

	int n,res;

	cout<<"Enter a Number: ";
	cin>>n;

	res = perfect(n);
	res == n ? cout<<"\nGiven Number is Perfect Number":cout<<"\nGiven Number is Not a Perfect Number";
return 0;
}

int perfect(int n)
{
	int sum;
	for(int i=1;i<n;i++)
	{
		if(n%i == 0)
		{
		sum = sum+i;
		}
	}

	if(sum == n)
	{
	return sum;
	}
	else
	{
	return 0;
	}
}

