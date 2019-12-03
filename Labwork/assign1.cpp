#include<iostream>
using namespace std;

int recursiveSum(int n, int sum);

int main()
{

int ch,n, temp, sum = 0;

cout<<"Calculate Sum:"<<endl;
cout<<"1.Using Loop"<<endl;
cout<<"2.Using Recursive"<<endl;
cout<<"Enter Your Choice: ";
cin>>ch;

switch(ch) {
case 1:
	cout<<"Enter Number: ";
	cin>>n;
	while(n != 0)
	{
		sum = sum + n%10;
		n = n/10;
	};
	cout<<"\nThe Addition is:"<<sum;
	break;
case 2:
	cout<<"Enter the Number: ";
	cin>>n;
	sum = recursiveSum(n, sum);
	cout<<"\nThe Addition is:"<<sum;	
	break;
}

return 0;
}

int recursiveSum(int n, int sum)
{

if(n != 0)
{
		sum = sum + n%10;
		n = n/10;
		recursiveSum(n, sum);
}
else
{
return sum;
}

}
