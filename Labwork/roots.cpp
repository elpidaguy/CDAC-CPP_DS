#include<iostream>
#include<math.h>
using namespace std;

int main()
{

int a,b,c,res1, res2, sqrtVal = 0;

cout<<"Enter Numbers of equation:"<<endl;
cin>>a;
cin>>b;
cin>>c;

sqrtVal = sqrt((b*b)-4*a*c);

if(sqrtVal < 0)
{
	cout<<"Roots of Equation are complex numbers"<<endl;
}
else
{
res1 = (b+sqrtVal)/2*a;
res2 = (b-sqrtVal)/2*a;

cout<<"The roots are: "<<res1<<","<<res2<<endl;
}

}
