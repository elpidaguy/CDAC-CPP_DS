#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

class MyException:public runtime_error
{

public:
MyException(string x):runtime_error(x)
{
}

string what()
{
return runtime_error::what();
}
};


float  divide(int a,int b)
{
if(b==0)
{
throw MyException("Divide by Zero error");
}


return (float)a/b;

}
int main()
{

try
{
float a= divide(5,0);

}
catch(MyException e)
{
cout<<e.what();
}

return 0;
}
