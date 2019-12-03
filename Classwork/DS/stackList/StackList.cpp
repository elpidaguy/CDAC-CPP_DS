#include"StackList.h"

template <class T>
StackList<T>::StackList(){};

template <class T>
StackList<T>::~StackList(){};

template <class T>
bool StackList<T>::Push(T ele)
{
	return obj.addAtBegin(ele);
};

template <class T>
T StackList<T>::Pop()
{
	return obj.deleteFromBegin();
};

template <class T>
bool StackList<T>::isEmpty()
{
	return obj.isEmpty();
};

template <class T>
bool StackList<T>::Full()
{
	return false;
};
