#include"C2.h"

template <class T>
//C2<T>::C2(int s):size(s), arr(new T[s]), top(-1){};
C2<T>::C2(int s, int p):size(new int[s]), arr(new T[s]), top(new int[s]){

try{
	if(s%p != 0)
	{
		throw runtime_error("\nSize should be fully divisible by Part!");
	}
	}
	catch(runtime_error e)
	{
		cout<<e.what()<<endl;
	};
	int temp = -1,temp2 = s;
	for(int i=0,j=p;i<p;i++,j--)
	{
		top[i] = temp;
		temp = (s/p) + temp;
		temp2 = s/j;
		size[i] = temp2;
	}
};

template <class T>
bool C2<T>::isEmpty(int sn) const
{
	return (-1 == top[sn]);
}

template <class T>
bool C2<T>::isFull(int sn) const
{
	return (size[sn]-1 == top[sn]);
}

template <class T>
T C2<T>::pop(int sn)
{
	if(isEmpty(sn))
	{
		throw runtime_error("Stack Underflow!");
	}
	//T ele = arr[top];
	//top--;
	//return ele;
	return arr[top[sn]--];
}

template <class T>
void C2<T>::push(T ele, int sn)
{
	if(isFull(sn))
	{
		throw runtime_error("Stack Overflow!");
	}
	
	top[sn]++;
	arr[top[sn]] = ele;
}

template <class T>
T C2<T>::peep(int sn)
{
	if(isEmpty(sn))
	{
		throw runtime_error("Stack Underflow!");
	}
	
	return arr[top[sn]];
}

template <class T>
C2<T>::~C2()
{
	delete []arr;
	delete []size;
	delete []top;
}

//explicit templatize class instanciation
template class C2<int>;
template class C2<char>;
template class C2<float>;
