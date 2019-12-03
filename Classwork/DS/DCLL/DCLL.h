#ifndef DCLL_H
#define DCLL_H

#include"Node.cpp"

using namespace std;

template <class T>
class DCLL
{
	private:
		Node<T> *head, *tail;
		int count;
	public:
		DCLL();
		bool isEmpty();
		int size();
		bool addAtBegin(T ele);
		T deleteFromBegin();
		bool addAtEnd(T ele);
		T deleteFromEnd();
		void Display();
		bool insertAt(int pos, T ele);
		~DCLL();
};

#endif
