#include"Node.h"

template <class T>
void Node<T>::setNext(Node *t)
{
	next = t;
};

template <class T>
Node<T>* Node<T>::getNext()
{
	return next;
};

template <class T>
void Node<T>::setPrev(Node *t)
{
	prev = t;
};

template <class T>
Node<T>* Node<T>::getPrev()
{
	return prev;
};

template <class T>
void Node<T>::setData(T ele)
{
	data = ele;
};

template <class T>
T Node<T>::getData()
{
	return data;
};


//template class Node<int>;
