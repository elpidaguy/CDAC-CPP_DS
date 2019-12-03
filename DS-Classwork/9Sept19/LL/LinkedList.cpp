#include "Node.cpp"
#include<iostream>
using namespace std;

template<class T>
class LinkedList
{

	private:
	Node<T>* head;
	Node<T>* tail;
	public:
	LinkedList():head(nullptr), tail(nullptr)
	{}

	bool IsFull(){
	return false;
	}

	bool IsEmpty(){
   	return ( nullptr == head && nullptr == tail);
	}

	bool AddAtEnd( T ele)
	{
	
	Node<T> *temp = new Node<T>;
	temp->SetData(ele);
	temp->SetNext(nullptr);
		if(IsEmpty())
		{
		head = tail = temp;
		}
		else
		{
		tail->SetNext(temp);
		tail= temp;
			
		}

	
	}

	void Display()
	{
		Node<T> *t = head;
		cout<<"\n";
		while( nullptr != t)
		{
			cout<<t->GetData()<<"-->";
			t = t->GetNext();
				
		}
		cout<<"NULL"<<endl;

	}
};

int main()
{

	LinkedList<int> ll;
	ll.AddAtEnd(11);
	ll.AddAtEnd(22);
	ll.AddAtEnd(33);
	ll.AddAtEnd(44);
	ll.AddAtEnd(55);
	ll.AddAtEnd(66);
	ll.Display();
};
