#include<iostream>
using namespace std;
int sum(int res);

int main(){
	int res=0;
	cout<<"Enter 0 to exit"<<endl;
	sum(res);
	return 0;
}
int sum(int res){
	int n;
	cout<<"\nEnter a number: ";
	cin>>n;
	if(n==0)
	{
	return 0;
	}
	res=res+n;
	cout<<"\nSum is: "<<res;
	sum(res);
}
