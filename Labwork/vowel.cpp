#include<iostream>
using namespace std;

int main()
{
	int count=0;
	string string;
	cout<<"Enter String: ";
	cin>>string;

	for(int i=0;i<string.length();i++)
	{
		if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
		{
			++count;
		}
	}


	cout<<"\nTotal Number of Vowels: "<<count<<endl;
	return 0;
}
