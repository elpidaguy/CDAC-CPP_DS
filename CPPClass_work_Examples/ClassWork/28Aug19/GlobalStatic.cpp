#include<iostream>
using namespace std;

int g =10;
int g1;

int main(){

	cout<<"\n g ="<<g;
	cout<<"\n g1 ="<<g1;
	static int s  =10;
	cout<<"\n s ="<<s;
	static int s1;
	cout<<"\n s1 ="<<s1;

	return 0;
}
