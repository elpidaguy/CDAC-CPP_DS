#ifndef QUEUE_H
#define QUEUE_H

#include<iostream>
#include<stdexcept>
using namespace std;

template <class T>
class Queue
{

	private:
		int front,rear,size;
		int *arr;
	public:
		Queue();
		Queue(int s);
		bool isfull() const;
		bool isempty() const;
		T delQueue();
		void addQueue(T ele);
		~Queue();
};

#endif
