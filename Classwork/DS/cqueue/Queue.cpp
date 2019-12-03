#include "Queue.h"

	template <class T>
	Queue<T>::Queue():front(0),rear(0),size(0),arr(nullptr){};
	
	template <class T>
	Queue<T>::Queue(int s):front(0),rear(0),size(s), arr(new T[size]){};
	
	template <class T>
	bool Queue<T>::isfull() const
	{
		return ((rear+1)%size == front);
	};
	
	template <class T>
	bool Queue<T>::isempty() const
	{
		return (rear == front);
	};
	
	template <class T>
	T Queue<T>::delQueue()
	{
		T ele;
		if(!isempty())
		{
			ele = arr[front++];
		}
		else
		{
			throw runtime_error("\nQueue is empty!");
		}
		return ele;
	};
	
	template <class T>
	void Queue<T>::addQueue(T ele)
	{
		if(!isfull())
		{
			arr[rear] = ele;
			rear = (rear+1)%size;
		}
		else
		{
			throw runtime_error("\nQueue is full!");
		}
	};
	
	template <class T>
	Queue<T>::~Queue()
	{
		delete []arr;
	};
	
	
//explcit tci

template class Queue<int>;
