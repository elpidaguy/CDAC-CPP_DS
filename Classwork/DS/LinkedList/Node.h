#ifndef NODE_H
#define NODE_H

#include<iostream>
#include<stdexcept>

using namespace std;

template <class T>
class Node
{
	private:
		Node* next;
		T data;
	public:
		//accessor
		T getData() const;
		Node* getNext() const;
		//mutator
		void setData(T ele);
		void setNext(Node *t);
};

#endif
