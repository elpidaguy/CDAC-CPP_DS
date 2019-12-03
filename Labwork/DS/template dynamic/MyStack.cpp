#include"MyStack.h"
		
		template <class T>
		MyStack<T>::MyStack(int s):size(s),arr(new T[size]),top(-1){};
		
		
		template <class T>
		bool MyStack<T>::isEmpty() const
		{
			return ( -1 == top );
		}
		
		template <class T>
		bool MyStack<T>::isFull() const
		{
			return ( size -1 == top );
		}

		template <class T>
		T MyStack<T>::peek() const
		{
			if(isEmpty())
			{
				throw runtime_error("\nStack is Empty!");
			}
			return arr[top];
		}

		template <class T>
		T MyStack<T>::pop()
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

		template <class T>
		void MyStack<T>::push(T ele)
		{
			if(isFull())
			{
				throw runtime_error("\n Stack Overflow!");
			}

			++top;
			arr[top] = ele;
		
		}
		
		template <class T>
		MyStack<T>::~MyStack(){
		delete []arr;
		};
		
		
//Explicit templatized class init
template class MyStack<int>;
template class MyStack<char>;
