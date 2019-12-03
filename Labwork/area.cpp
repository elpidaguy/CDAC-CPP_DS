#include<iostream>
using namespace std;
#define pi 3.14

int AreaCircle(){
	int r, Ac;
	cout<<"Please Enter the radius of circle: ";
	cin>>r;
	Ac= (pi*(r*r));
	cout<<"\nArea of circle is: "<<Ac;
	}

int AreaRectangle(){
	int l ,b, Ar;
	cout<<"Please Enter the length of rectangle: ";
	cin>>l;
	cout<<"Please Enter the breadth of rectangle: ";
	cin>>b;	
	Ar= l*b;
	cout<<"\nArea of rectangle is: "<<Ar;
	}


int AreaSquare(){
	int a, As;
	cout<<"Please Enter the side of square: ";
	cin>>a;
	As= a*a;
	cout<<"\nArea of square is: "<<As;
	}

int main()
{
int ch;

cout<<"Area Calculator:"<<endl;
cout<<"1.Area of Circle"<<endl;
cout<<"2.Area of Rectangle"<<endl;
cout<<"3.Area of Square"<<endl;
cout<<"Enter your Choice: "<<endl;
cin>>ch;

switch(ch)
{
case 1:
	AreaCircle();
break;
case 2:
	AreaRectangle();
break;
case 3:
	AreaSquare();
break;
}
return 0;

}
