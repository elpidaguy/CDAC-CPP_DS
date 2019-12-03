#include"Node.h"

//accessor
template <class T>
T Node<T>::getData() const
{
	return data;
};

template <class T>
Node<T>* Node<T>::getNext() const
{
	return next;
};
//mutator
template <class T>
void Node<T>::setData(T ele)
{
	data = ele;
};

template <class T>
void Node<T>::setNext(Node* t)
{
	next = t;
};

template class Node<int>;
