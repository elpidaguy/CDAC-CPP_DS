#include"MyException.h"
using namespace std;

int main()
{
try
{
	float res = divide(10,0);
}
catch(const char *a)
{
	cout<<a;
}
catch(MyException e)
{
	cout<<e.what();
}
catch(...)
{
	cout<<"Something went wrong!";
}
return 0;
}
