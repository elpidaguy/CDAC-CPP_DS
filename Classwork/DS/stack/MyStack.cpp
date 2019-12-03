#include"MyStack.h"

		MyStack::MyStack():top(-1){};

		bool MyStack::isEmpty() const
		{
			return ( -1 == top );
		}

		bool MyStack::isFull() const
		{
			return ( SIZE -1 == top );
		}

		int MyStack::peek() const
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

			//int ele = arr[top];
			//top--;
			//return ele;
			return arr[top--];
		}

		void MyStack::push(int ele)
		{
			if(isFull())
			{
				throw runtime_error("\n Stack Overflow!");
			}

			++top;
			arr[top] = ele;
		
		}
