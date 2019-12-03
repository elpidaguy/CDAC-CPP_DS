#include"MyStack.h"

		MyStack::MyStack():top(-1), n(0){};

		bool MyStack::isEmpty()
		{
			return ( -1 == top );
		}

		bool MyStack::isFull()
		{
			return ( SIZE -1 == top );
		}

		int MyStack::peek()
		{
			if(isEmpty())
			{
				throw runtime_error("\nStack is Empty!");
			}
			return arr[top];
		}

		int MyStack::pop()
		{
			if(isEmpty())
			{
				throw runtime_error("\n Stack Underflow!");
			}

			int ele = arr[top];
			top--;
			return ele;
			//return arr[top--];
		}

		void MyStack::push(int ele)
		{
			if(isFull())
			{
				throw runtime_error("\n Stack Overflow!");
			}

			top = top + 1;
			arr[top] = ele;
		
		}
		
		void MyStack::Accept()
		{
			cout<<"\nEnter Decimal Number: ";
			cin>>n;
		}
		
		void MyStack::Display()		
		{
		cout<<"\nConverted Number is: ";
			while(top>-1)
			{
			//int ele = arr[top];
			//top--;
			//return ele;
			cout<<pop();
			}
			cout<<endl;
		}
		
		void MyStack::convertBin()
		{
			while(n>0)
			{
				push(n%2);
				n=n/2;
			}
		}
		
		void MyStack::convertOct()
		{
			while(n>0)
			{
				push(n%8);
				n=n/8;
			}
		}
