#include"QueueList.h"

template <class T>
QueueList<T>::QueueList(){};

template <class T>
QueueList<T>::~QueueList(){};

template <class T>
bool QueueList<T>::AddQueue(T ele)
{
	return obj.addAtEnd(ele);
};

template <class T>
T QueueList<T>::DeleteQueue()
{
	return obj.deleteFromBegin();
};

template <class T>
bool QueueList<T>::isEmpty()
{
	return obj.isEmpty();
};

template <class T>
bool QueueList<T>::Full()
{
	return false;
};
