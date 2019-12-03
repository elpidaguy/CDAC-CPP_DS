#include"LL.h"

template<class T>
LL<T>::LL():head(nullptr),tail(nullptr),count(0){
	cout<<"\nCTOR of LL is Called!"<<endl;
};

template <class T>
LL<T>::~LL(){
		cout<<"\nDestructor: ";
		Node<T> *t = nullptr;
		t=head;
		while(head != nullptr)
		{
			cout<<t->getData()<<"-->";
			head = head->getNext();
			delete t;
			t = head;
		}
		cout<<"NULL"<<endl;
}

template <class T>
bool LL<T>::isEmpty()
{
	return (head==nullptr && tail==nullptr);
}

/*
template <class T>
int LL<T>::size() const
{
	return count;
}
*/
template <class T>
bool LL<T>::addAtBegin(T ele)
{
	bool status = false;
	Node<T> *t = new Node<T>;
	t->setData(ele);
	
	if(isEmpty())
	{
		t->setNext(nullptr);
		head=tail=t;
		count = count + 1;
		status = true;
	}
	else
	{
		t->setNext(head);
		head=t;
		count = count+1;
		status = true;
	}
	
	return status;
}

template <class T>
bool LL<T>::addAtEnd(T ele)
{
	bool status = false;
	Node<T> *t = new Node<T>;
	t->setData(ele);
	t->setNext(nullptr);
	
	if(isEmpty())
	{
		head=tail=t;
		count = count +1;
		status = true;
	}
	else
	{
		tail->setNext(t);
		tail = t;
		count = count+1;
		status = true;
	}
	return status;
}

template <class T>
T LL<T>::deleteFromBegin()
{
	Node<T> *t = nullptr;
	t=head;
	T ele = head->getData();
	if(tail==head)
	{
		tail = head= nullptr;
		delete t;
	}
	else
	{
		head = t->getNext();
		t->setNext(nullptr);
		delete t;
	}
	count--;
	return ele;

}


template <class T>
T LL<T>::deleteFromEnd()
{
	T ele;
	if(!isEmpty())
	{
		ele = tail->getData();
		if(tail == head)
		{
			tail = head = nullptr;
			delete tail;
		}
		else
		{
			Node<T> *t = nullptr;
			t=head;		
			while(t->getNext() != tail)
			{
				t = t->getNext();
			}
			t->setNext(nullptr);
			delete tail;
			tail = t;
			count--;
		}
	}
	return ele;
}
/*
template <class T>
bool LL<T>::insertAt(int pos,T ele)
{
	bool status = false;
	if(count >= pos-1 && !isEmpty())
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
		
		Node<T> *t = new Node<T>;
		t->setData(ele);
		p->setNext(t);
		t->setNext(q);
		count++;
		status = true;
	}
	else
	{
		this->addAtBegin(ele) ? status = true : status = false;
	}
	
	return status;
}

template <class T>
bool LL<T>::reverse()
{
	bool status = false;
	if(!isEmpty())
	{
		Node<T> *nhead = head;
		Node<T> *t = nullptr;
		head = head->getNext();
		nhead->setNext(nullptr);
		tail = nhead;
		
		while(head != nullptr)
		{
			t = head;
			head = head->getNext();
			t->setNext(nhead);
			nhead = t;
		}
		head = nhead;
		status = true;
	}
	
	return status;
}

template <class T>
void LL<T>::Display() {
	if(isEmpty())
	{
		cout<<"\nLinked List is Empty!";
	}
	else
	{
		cout<<"\nLinked List:"<<endl;
		Node<T> *t = nullptr;
		t=head;
		while(t != nullptr)
		{
			cout<<t->getData()<<"-->";
			t = t->getNext();
		}
		cout<<"NULL"<<endl;
	}
}
*/

//explicit instantiation of templatized class
template class LL<int>;
