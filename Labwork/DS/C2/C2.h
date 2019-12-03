#ifndef C2_H
#define C2_H
#include<iostream>
#include<stdexcept>
using namespace std;

template <class T>
class C2 {

	private:
		int *top;
		T *arr;
		int *size;
	public:
		C2();
		C2(int s, int p);
		bool isEmpty(int w) const;
		bool isFull(int w) const;
		T pop(int w);
		T peep(int w);
		void push(T ele,int w);
		~C2();
};

#endif
