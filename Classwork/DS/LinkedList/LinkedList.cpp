#include"LinkedList.h"

template <class T>
LinkedList<T>::LinkedList():head(nullptr),tail(nullptr),count(0){
	cout<<"\n CTOR is called"<<endl;
};

template <class T>
LinkedList<T>::~LinkedList()
{
	//todo: write display
}

template <class T>
int LinkedList<T>::size()
{
	return count;
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
		newNode = tail;
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
T LinkedList<T>::deleteFromEnd(){};

template <class T>
bool LinkedList<T>::reverse(){};

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
