#ifndef NODE_H
#define NODE_H
#include<iostream>

using namespace std;

template <class T>
class Node
{

	private:
		Node<T> *next, *prev;
		T data;
	
	public:
		void setNext(Node *t);
		Node<T>* getNext();
		void setPrev(Node *t);
		Node<T>* getPrev();
		void setData(T ele);
		T getData();

};

#endif
