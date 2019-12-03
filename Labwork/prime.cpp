#include<iostream>
using namespace std;

int main()
{
	int n1, n2,flag;
	cout<<"Enter range: ";
	cin>>n1;
	cin>>n2;

for(int i= n1; i<=n2;i++){
flag = 0;	
for(int j=2;j<i;j++)
	{
		if ( i % j == 0  )
		{
		//cout<<i<<" is a not prime number."<<endl;
		flag = 1;
		break;
		}
	}

		if(flag == 0)
		{
			cout<<"\t"<<i;
		}
	}
	return 0;
}
