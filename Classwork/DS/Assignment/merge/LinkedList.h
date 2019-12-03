#ifndef LL_H
#define LL_H
#include<iostream>
#include"Node.h"
using namespace std;

template <class T>
class LinkedList{
	private:
		Node<T> *head,*tail;
		int count;
	public:
		LinkedList();
		~LinkedList();
		int size();
		bool isEmpty();
		bool addAtBegin(T ele);
		bool addAtEnd(T ele);
		void mergeAsc(LinkedList<T> ll);
		bool insertAt(int pos, T ele);
		T deleteFromBegin();
		T deleteFromEnd();
		bool reverse();
		void Display();
};

#endif
