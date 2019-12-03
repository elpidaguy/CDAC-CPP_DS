#include"DLL.h"

template <class T>
DLL<T>::DLL():count(0),head(nullptr),tail(nullptr){
	cout<<"\nCTOR CALLED"<<endl;
};

template <class T>
DLL<T>::~DLL()
{
	Node<T> *t = head;
	while( head != nullptr)
	{
		head = head->getNext();
		cout<<t->getData()<<endl;
		delete t;
		t = head;
	}
}

template <class T>
int DLL<T>::size()
{
	return count;
}

template <class T>
bool DLL<T>::isEmpty(){
	return (head == nullptr && tail == nullptr);
};

template <class T>
bool DLL<T>::addAtBegin(T ele)
{
	bool success = false;
	Node<T>* t = new Node<T>;
	t->setData(ele);
	if(isEmpty())
	{
		head = tail = t;
		t->setNext(nullptr);
		t->setPrev(nullptr);
		count++;
		success = true;
	}
	else
	{
		t->setNext(head);
		t->setPrev(nullptr);
		head->setPrev(t);
		head = t;
		count++;
		success = true;
	}
	
	return success;
}

template <class T>
T DLL<T>::deleteFromBegin()
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
			head->setPrev(nullptr);
			delete t;
			count--;	
		}
	}
	
	return ele;
}

template <class T>
bool DLL<T>::addAtEnd(T ele)
{
	bool success = false;
	Node<T>* t = new Node<T>;
	t->setData(ele);
	if(isEmpty())
	{
		head = tail = t;
		t->setNext(nullptr);
		t->setPrev(nullptr);
		count++;
		success = true;
	}
	else
	{
		t->setNext(nullptr);
		t->setPrev(tail);
		tail->setNext(t);
		tail = t;
		count++;
		success = true;
	}
	
	return success;
}

template <class T>
T DLL<T>::deleteFromEnd()
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
			tail->setNext(nullptr);
			delete t;
			count--;
		}
	}
	
	return ele;
}

template <class T>
bool DLL<T>::insertAt(int pos, T ele)
{
	bool success = false;
	if(!isEmpty())
	{	
		if(pos == 1)
		{
			return addAtBegin(ele);
		}
		else if(pos >= count)
		{
			return addAtEnd(ele);
		}
		else
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
		} 
		
	return success;
	}
	else
	{
		return addAtBegin(ele);
	}
}

template <class T>
void DLL<T>::OddEven()
{
	if(!isEmpty())
	{
		Node<T> *start=head;
		Node<T> *end=tail;
		while(start!=end)
		{
			Node<T> *temp=start;
			if(temp->getData()%2==0)
			{
				if(temp==head)
				{
					head=head->getNext();
					head->setPrev(nullptr);
					tail->setNext(temp);
					temp->setNext(nullptr);
					temp->setPrev(tail);
					tail=temp;
					start=head;
					//break;
				}
				else
				{
					Node<T> *p=temp->getPrev();
					Node<T> *q=temp->getNext();
					p->setNext(q);
					q->setPrev(p);
					start=start->getNext();
					tail->setNext(temp);
					temp->setNext(nullptr);
					temp->setPrev(tail);
					tail=temp;
					
				}
			}
			else
			{
				start=start->getNext();
			}
		}
	}
}

template <class T>
void DLL<T>::Display()
{
	if(isEmpty())
	{
		cout<<"\nLinked List is Empty."<<endl;
	}
	else
	{
		Node<T> *t = nullptr;
		t=head;
		
		while(t != tail)
		{
			cout<<t->getData()<<"-->";
			t = t->getNext();
		}
		cout<<t->getData();
	}
}


template class DLL<int>;
