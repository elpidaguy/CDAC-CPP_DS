#include<iostream>
#include<stdexcept>
using namespace std;
#define SIZE 100

class MyStack {
	
	private:
		int top;
		int arr[SIZE];
		int n;
	public:
		MyStack();
		bool isEmpty();
		bool isFull();
		int peek();
		int pop();
		void push(int ele);
		void Accept();
		void Display();
		void convertBin();
		void convertOct();

};
