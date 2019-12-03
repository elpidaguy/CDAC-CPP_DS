#include<iostream>
#include<stdexcept>
using namespace std;

template<class T>
class Stack
{
	private:
		int tos;
		T *arr;
		int size;
	public:
		Stack(int s);
		bool IsEmpty();
		bool IsFull();
		T peep();
		T pop();
		void push(T ele);

};


