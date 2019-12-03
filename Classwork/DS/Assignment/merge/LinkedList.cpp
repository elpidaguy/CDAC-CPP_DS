#include"LinkedList.h"

template <class T>
LinkedList<T>::LinkedList():head(nullptr),tail(nullptr),count(0){
	cout<<"\n CTOR is called"<<endl;
};

template <class T>
LinkedList<T>::~LinkedList()
{
	Node<T> *t = nullptr;
		t = head;
		cout<<"\n Destructor: "<<endl;
		while(head != nullptr)
		{
			cout<<head->getData()<<"-->";
			head = head->getNext();
			delete t;
			t = head;
		}
		cout<<"NULL"<<endl;
}

template <class T>
int LinkedList<T>::size()
{
	return count;
}


template <class T>
void LinkedList<T>::mergeAsc(LinkedList<T> ll)
{
	/*if(!isEmpty() && !ll.isEmpty())
	{
		tail->setNext(ll.head);
		tail = ll.tail;
		count  = count + ll.count;
	}
	*/

	Node<T> *p = head;
	Node<T> *q = head->getNext();
	
	for(int i = 0; i < count -1; i++)
	{
		for(int j = 0; j<count-i-1; j++)
		{
			if(q->getData() < p->getData())
			{
				Node<T> *temp = new Node<T>;
				temp->setData(p->getData());
				p->setData(q->getData());
				q->setData(temp->getData());
			}
			if(q->getNext() != nullptr)
			{
			p = p->getNext();
			q = q->getNext();
			}
		}
		
	}
	
	Display();
}


template <class T>
bool LinkedList<T>::isEmpty(){
	return (head == nullptr && tail == nullptr);
};

template <class T>
bool LinkedList<T>::addAtBegin(T ele){
	bool isSuccess = false;
	Node<T> *newNode = new Node<T>;
	newNode->setData(ele);
	if(isEmpty())
	{
		newNode->setNext(nullptr);
		head = tail = newNode;
		//tail->setNext(nullptr);
		count++;
		isSuccess = true;
	}else
	{
		newNode->setNext(head);
		head = newNode;
		count++;
		isSuccess = true;	
	}
	
	return isSuccess;
};

template <class T>
bool LinkedList<T>::addAtEnd(T ele){
	bool isSuccess = false;
	Node<T> *newNode = new Node<T>;
	newNode->setData(ele);
	newNode->setNext(nullptr);
	if(isEmpty())
	{
		head = tail = newNode;
		count++;
		isSuccess = true;
	}else
	{
		tail->setNext(newNode);
		tail = newNode;
		count++;
		isSuccess = true;
	}
	return isSuccess;
};

template <class T>
bool LinkedList<T>::insertAt(int pos, T ele){
};

template <class T>
T LinkedList<T>::deleteFromBegin(){
	bool isSuccess = false;
	T ele;
	if(!isEmpty())
	{
		if(head == tail)
		{
			ele = head->getData();
			Node<T> *t = tail;
			head = nullptr;
			delete t;
			tail = nullptr;
			count--;
			isSuccess = true;
		}
		else
		{
			ele = head->getData();
			Node<T> *t = head;
			head = head->getNext();
			delete t;
			count--;
			isSuccess = true;
		}
	}
	return ele;
};

template <class T>
T LinkedList<T>::deleteFromEnd(){
	T ele;
	bool isSuccess = false;
	if(!isEmpty())
	{
		Node<T> *t = nullptr;
		if(head == tail)
		{
			ele = tail->getData();
			head = nullptr;
			tail=nullptr;
			delete tail;
			count--;
			isSuccess = true;
		}
		else
		{
			t = head;
			while(t->getNext() != tail)
			{
				t = t->getNext();
			}
			ele = tail->getData();
			t->setNext(nullptr);
			delete tail;
			tail = t;
			count--;
			isSuccess = true;
		}
	}
	
	return ele;

};

template <class T>
bool LinkedList<T>::reverse(){
	bool status = false;
	if(!isEmpty())
	{
		Node<T> *nhead, *t = nullptr;
		nhead = head;
		head = head->getNext();
		nhead->setNext(nullptr);
		tail = nhead;
		while(head != nullptr)
		{
			t = head;
			head=head->getNext();
			t->setNext(nhead);
			nhead = t;
		}
		head = nhead;
		status = true;
	}
	return status;
};

template <class T>
void LinkedList<T>::Display(){

	if(isEmpty())
	{
		cout<<"\nLinked List is Empty!"<<endl;
	}
	else
	{
		Node<T> *t = nullptr;
		t = head;
		cout<<"\nLinked List is: "<<endl;
		while(t != nullptr)
		{
			cout<<t->getData()<<"-->";
			t = t->getNext();
		}
		cout<<"NULL"<<endl;
	}
};

//explicit type instantiation of templatized class
template class LinkedList<int>;
