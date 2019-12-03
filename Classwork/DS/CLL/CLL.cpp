#include"CLL.h"

template<class T>
CLL<T>::CLL():head(nullptr),tail(nullptr),count(0){
	cout<<"\nCTOR of CLL is Called!"<<endl;
};

template <class T>
CLL<T>::~CLL(){
		cout<<"\nDestructor: ";
		Node<T> *t = nullptr;
		t=head;
		while(t != tail)
		{
			cout<<t->getData()<<"-->";
			head = head->getNext();
			delete t;
			t = head;
		}
		delete tail;
		cout<<"NULL"<<endl;
}

template <class T>
bool CLL<T>::isEmpty()
{
	return (head==nullptr && tail==nullptr);
}

template <class T>
int CLL<T>::size() const
{
	return count;
}

template <class T>
bool CLL<T>::addAtBegin(T ele)
{
	bool status = false;
	Node<T> *t = new Node<T>;
	t->setData(ele);
	
	if(isEmpty())
	{
		t->setNext(t);
		head=tail=t;
		count = count + 1;
		status = true;
	}
	else
	{
		t->setNext(head);
		tail->setNext(t);
		head=t;
		count = count+1;
		status = true;
	}
	
	return status;
}

template <class T>
bool CLL<T>::addAtEnd(T ele)
{
	bool status = false;
	Node<T> *t = new Node<T>;
	t->setData(ele);
	t->setNext(head);
	
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
T CLL<T>::deleteFromBegin()
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
		tail->setNext(head);
		delete t;
	}
	count--;
	return ele;

}

template <class T>
T CLL<T>::deleteFromEnd()
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
			t->setNext(head);
			delete tail;
			tail = t;
			count--;
		}
	}
	return ele;
}

/*
template <class T>
bool CLL<T>::insertAt(int pos,T ele)
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
bool CLL<T>::reverse()
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
*/

template <class T>
void CLL<T>::Display() {
	if(isEmpty())
	{
		cout<<"\nLinked List is Empty!";
	}
	else
	{
		cout<<"\nLinked List:"<<endl;
		Node<T> *t = nullptr;
		t=head;
		while(t != tail)
		{
			cout<<t->getData()<<"-->";
			t = t->getNext();
		}
		cout<<tail->getData()<<"-->";
		cout<<"NULL"<<endl;
	}
}


//explicit instantiation of templatized class
template class CLL<int>;
