#include<iostream>
using namespace std;

int main(){
	string str;
	cout<<"Enter a string: ";
	cin>>str;

	for(int i=0;i<=str.length();i++)
	{
		if (str[i]== toupper(str[i]))
		{
			str[i]=tolower(str[i]);
		}
		else{
			str[i]=toupper(str[i]);
		}
		
	}
	cout<<"\nOpposite case string is: "<<str;

		
	return 0;
}
