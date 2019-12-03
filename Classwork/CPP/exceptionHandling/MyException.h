#ifndef MyEx_H
#define MyEx_H

#include<iostream>
#include<string>
#include<exception>
#include<stdexcept>
using namespace std;

class MyException: public runtime_error
{
        public:
                MyException(string x);
                string what();
		friend float divide(int a, int b);
};

float divide(int a, int b);


#endif
