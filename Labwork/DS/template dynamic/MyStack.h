#include<iostream>
#include<stdexcept>
using namespace std;

template <class T>

class MyStack {
	
	private:
		int top;
		T *arr;
		int size;
	public:
		MyStack(int s);
		bool isEmpty() const;
		bool isFull() const;
		T peek() const;
		T pop();
		void push(T ele);
		~MyStack();
};
