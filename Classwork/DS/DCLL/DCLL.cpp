#include"DCLL.h"

template <class T>
DCLL<T>::DCLL():count(0),head(nullptr),tail(nullptr){
	cout<<"\nCTOR CALLED"<<endl;
};

template <class T>
DCLL<T>::~DCLL()
{
	Node<T> *t = head;
	while( head != tail)
	{
		head = head->getNext();
		cout<<t->getData()<<endl;
		delete t;
		t = head;
	}
}

template <class T>
int DCLL<T>::size()
{
	return count;
}

template <class T>
bool DCLL<T>::isEmpty(){
	return (head == nullptr && tail == nullptr);
};

template <class T>
bool DCLL<T>::addAtBegin(T ele)
{
	bool success = false;
	Node<T>* t = new Node<T>;
	t->setData(ele);
	if(isEmpty())
	{
		head = tail = t;
		t->setNext(t);
		t->setPrev(t);
		count++;
		success = true;
	}
	else
	{
		t->setNext(head);
		t->setPrev(tail);
		head->setPrev(t);
		head = t;
		count++;
		success = true;
	}
	
	return success;
}

template <class T>
T DCLL<T>::deleteFromBegin()
{
	T ele;
	if(!isEmpty())
	{
		ele = head->getData();
		if(head == tail)
		{
			head = nullptr;
			delete head;
			tail = nullptr;
			count--;
		}
		else
		{
			Node<T> *t = head;
			head = head->getNext();
			head->setPrev(tail);
			tail->setNext(head);
			delete t;
			count--;	
		}
	}
	
	return ele;
}

template <class T>
bool DCLL<T>::addAtEnd(T ele)
{
	bool success = false;
	Node<T>* t = new Node<T>;
	t->setData(ele);
	if(isEmpty())
	{
		head = tail = t;
		t->setNext(t);
		t->setPrev(t);
		count++;
		success = true;
	}
	else
	{
		t->setNext(head);
		t->setPrev(tail);
		tail->setNext(t);
		tail = t;
		count++;
		success = true;
	}
	
	return success;
}

template <class T>
T DCLL<T>::deleteFromEnd()
{
	T ele;
	if(!isEmpty())
	{
		ele = tail->getData();
		if(head == tail)
		{
			head = nullptr;
			delete head;
			tail = nullptr;
			count--;
		}
		else
		{
			Node<T> *t = tail;
			tail = tail->getPrev();
			tail->setNext(head);
			head->setPrev(tail);
			delete t;
			count--;
		}
	}
	
	return ele;
}

template <class T>
bool DCLL<T>::insertAt(int pos, T ele)
{/*
	bool success = false;
	if(!isEmpty() && pos != 1 && pos > count)
	{	
		Node<T> *t = new Node<T>;
		t->setData(ele);
		if(count >= pos-1)
		{
			Node<T> *p = head;
			Node<T> *q = head->getNext();
			int no = 0;
			while(no != pos-2)
			{
				p = p->getNext();
				q = q->getNext();
				no++;
			}
			
			p->setNext(t);
			t->setPrev(p);
			t->setNext(q);
			q->setPrev(t);
			
			count++;
			success = true;
			
		}
	return success;
	}
	else if(pos == 1)
	{
		return addAtBegin(ele);
	}
	else{
		return addAtEnd(ele);	
	}*/
}

template <class T>
void DCLL<T>::Display()
{
	if(isEmpty())
	{
		cout<<"\nLinked List is Empty."<<endl;
	}
	else
	{
		Node<T> *t = nullptr;
		t=head;
		
		while(t->getNext() != head)
		{
			cout<<t->getData()<<"-->";
			t = t->getNext();
		}
		cout<<t->getData();
	}
}


template class DCLL<int>;
