#include<iostream>
#include<stdexcept>
using namespace std;
#define SIZE 5

class MyStack {
	
	private:
		int top;
		int arr[SIZE];
	public:
		MyStack();
		bool isEmpty() const;
		bool isFull() const;
		int peek() const;
		int pop();
		void push(int ele);

};
