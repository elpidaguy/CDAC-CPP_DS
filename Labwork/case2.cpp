#include<iostream>
using namespace std;

int main()
{
string str;

cout<<"Enter the string: ";
cin>>str;

for(int i=0;i<=str.length();i++)
{

if(int(str[i]) < 97)
{
	str[i] = int(str[i])+32;
}
else
{
	str[i] = int(str[i])-32;
}

}

cout<<"Output is: "<<str;

return 0;
}
