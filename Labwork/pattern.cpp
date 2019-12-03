#include <iostream>
using namespace std;

int main(){
	int i,j,k,l,n1,n2;
	cout<<"Enter the range: "<<endl;
	cin>>n1>>n2;
	l=n2+1;

	for (i=n1;i<=n2;i++)
	{
	for (j=n1;j<n2;j++)
		{
			if(l==j || j>l)
			{
				cout<<" ";
			}
			else{
		cout<<j;
			}
		}
	for (k=n2;k>=n1;k--)
	{
		if (l==k || k>l){
			cout<<" ";
		}
		else {
		cout<<k;
		}
	}
l--;	
	cout<<"\n";
	}

	return 0;
}
