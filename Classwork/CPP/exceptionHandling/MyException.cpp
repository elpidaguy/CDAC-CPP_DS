#include"MyException.h"
using namespace std;

		MyException::MyException(string x):runtime_error(x){};
		
                string MyException::what()
                {
                	return runtime_error::what();
                }
                
                float divide(int a, int b)
                {
                	if(b==0)
                	{
                		//throw "Divide By Zero";
                		throw MyException("Divide by Zero");
                	}
                	
                	return (float)a/b;
                }
