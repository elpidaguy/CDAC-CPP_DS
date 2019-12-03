#include"C2.h"

int main()
{
int ch,n,part,size,w;
char ci;
//C2<int> c(5);
//C2<char> c2(5);
cout<<"\nEnter Size of Array: ";
cin>>size;
cout<<"\nEnter part for C2:";
cin>>part;

C2<int> c(size,part);
C2<char> c3(size,part);

do
{
cout<<"\nEnter the choice:";
cout<<"\n1.Push int";
cout<<"\n2.Push char";
cout<<"\n3.Pop int";
cout<<"\n4.Pop char";
cout<<"\n5.Peep int";
cout<<"\n6.Peep char";
cout<<"\n7.Exit"<<endl;
cin>>ch;
cin.get();

switch(ch)
{
	case 1:{
		cout<<"\nEnter Array Number:";
		cin>>w;
		cout<<"\nEnter an Integer:";
		cin>>n;
		try{
		c.push(n,w-1);
		}catch(runtime_error e)
		{
			cout<<e.what();
		}
	}break;
	case 2:{
		cout<<"\nEnter Array Number:";
		cin>>w;
		cout<<"\nEnter a Char: ";
		cin>>ci;
		try{
		c3.push(ci,w-1);
		}catch(runtime_error e)
		{
			cout<<e.what();
		}
	}break;
	case 3:{
	try{
		cout<<"\nEnter Array Number:";
		cin>>w;
		cout<<"\nPopped: "<<c.pop(w-1);
	}catch(runtime_error e)
	{
		cout<<e.what();
	}
	}break;
	case 4:
	{
		try{
		cout<<"\nEnter Array Number:";
		cin>>w;
		cout<<"\nPopped: "<<c3.pop(w-1);
	}catch(runtime_error e)
	{
		cout<<e.what();
	}
	}break;
	case 5:
	{
		try{
		cout<<"\nEnter Array Number:";
		cin>>w;
		cout<<"\nValue at Top of stack: "<<c.peep(w-1);
	}catch(runtime_error e)
	{
		cout<<e.what();
	}
	}break;
	case 6:
	{
		try{
		cout<<"\nEnter Array Number:";
		cin>>w;
		cout<<"\nValue at Top of stack: "<<c3.peep(w-1);
	}catch(runtime_error e)
	{
		cout<<e.what();
	}
	}break;
}
}
while(ch!=7);
cout<<"\nThank You!";
return 0;
}
