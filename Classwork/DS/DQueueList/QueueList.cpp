#include"QueueList.h"

template <class T>
QueueList<T>::QueueList(){};

template <class T>
QueueList<T>::~QueueList(){};

template <class T>
bool QueueList<T>::AddAtEndQueue(T ele)
{
	return obj.addAtEnd(ele);
};

template <class T>
T QueueList<T>::DeleteFromBeginQueue()
{
	return obj.deleteFromBegin();
};

template <class T>
bool QueueList<T>::AddAtBeginQueue(T ele)
{
	return obj.addAtBegin(ele);
};

template <class T>
T QueueList<T>::DeleteFromEndQueue()
{
	return obj.deleteFromEnd();
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
