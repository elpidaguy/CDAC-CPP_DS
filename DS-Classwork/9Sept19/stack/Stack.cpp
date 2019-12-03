#include "Stack.h"

template<class T>
Stack<T>::Stack(int s): size(s),tos(-1),arr(new T[size])
		{}

		
template<class T>
	bool Stack<T>::IsEmpty()
		{
		return ( -1 == tos );
		}

template<class T>
	bool Stack<T>::IsFull()
		{
		return ( size -1 == tos );
		}

template<class T>
	T Stack<T>::peep()
		{
			if(IsEmpty())
			{
			 throw runtime_error("Stack underflow");
			}
			return arr[tos];

		}
template<class T>
	T Stack<T>::pop()
		{
			if(IsEmpty())
			{
			 throw runtime_error("Stack underflow");
			}
			T ele = arr[tos];
			tos = tos -1;
			return ele;
		}
template<class T>
	void Stack<T>::push(T ele)
		{
			if(IsFull())
			{
			 throw runtime_error("Stack overflow");
			}
			tos = tos +1;
			arr[tos] = ele;
	
		}

//Explicit instantiation of templatized class Stack
template class Stack<int>;
//template class Stack<char> ;










