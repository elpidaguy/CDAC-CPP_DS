#include"LL.h"
#include<iostream>
using namespace std;

template <class T>
class QueueList{
	private:
		LL<T> obj;
	public:
		QueueList();
		~QueueList();
		bool AddAtBeginQueue(T ele);
		T DeleteFromBeginQueue();
		bool AddAtEndQueue(T ele);
		T DeleteFromEndQueue();
		bool isEmpty();
		bool Full();
};
