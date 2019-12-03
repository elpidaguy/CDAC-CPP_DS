#include"MyStack.h"

int main()
{

MyStack ms;
int ch;


do{
cout<<"\nSelect Choice: ";
cout<<"\n1.Accept Number";
cout<<"\n2.Convert into Binary";
cout<<"\n3.Convert into Octal";
cout<<"\n4.Display";
cout<<"\n5.Exit"<<endl;
cin>>ch;

switch(ch)
{
	case 1:
		ms.Accept();
		break;
	case 2:
		ms.convertBin();
		break;
	case 3:
		ms.convertOct();
		break;	
	case 4:
		ms.Display();
		break;
}

}
while(ch != 5);
cout<<"\nThank You";
return 0;
}
