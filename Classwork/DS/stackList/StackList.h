#include"LL.h"
#include<iostream>
using namespace std;

template <class T>
class StackList{
	private:
		LL<T> obj;
	public:
		StackList();
		~StackList();
		bool Push(T ele);
		T Pop();
		bool isEmpty();
		bool Full();
};
