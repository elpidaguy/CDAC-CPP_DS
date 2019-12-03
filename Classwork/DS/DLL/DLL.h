#ifndef DLL_H
#define DLL_H

#include"Node.cpp"

using namespace std;

template <class T>
class DLL
{
	private:
		Node<T> *head, *tail;
		int count;
	public:
		DLL();
		bool isEmpty();
		int size();
		bool addAtBegin(T ele);
		T deleteFromBegin();
		bool addAtEnd(T ele);
		T deleteFromEnd();
		void Display();
		bool insertAt(int pos, T ele);
		~DLL();
};

#endif
