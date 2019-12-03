#ifndef LL_H
#define LL_H

#include<iostream>
#include"Node.h"
using namespace std;

template <class T>
class CLL
{
private:
	Node<T> *head, *tail;
	int count;
public:
	CLL();
	~CLL();
	int size() const;
	bool isEmpty();
	bool addAtBegin(T ele);
	bool addAtEnd(T ele);
	void Display();
	T deleteFromBegin();
	T deleteFromEnd();
	//bool insertAt(int pos,T ele);
	//bool reverse();

};

#endif
