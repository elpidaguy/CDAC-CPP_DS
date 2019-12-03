#include<iostream>
using namespace std;
int fact(int i);
int main()
{
	int n;
	cout<<"Enter Limit: ";
	cin>>n;

	for(int i=1;i<=n;i++)
	{
	fact(i);
	}
return 0;
}

int fact(int i)
{
int res=1;
for(int j=1;j<=i;j++)
{
res = res*j;
}
cout<<"\n "<<res;
}
