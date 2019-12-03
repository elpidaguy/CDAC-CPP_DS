#include"Node.cpp"
#include"LL.cpp"
#include"QueueList.cpp"

int main()
{

int ch,ele;
QueueList<int> obj;

do
{
cout<<"\n *********MENU************";
cout<<"\n 1. Add from Begin";
cout<<"\n 2. Delete from Begin";
cout<<"\n 3. Add from End";
cout<<"\n 4. Delete from End";
cout<<"\n 5. Check Empty";
cout<<"\n 6. Exit";
cout<<"\n Enter your choice:";
cin>>ch;
cin.get();

switch(ch)
{
	case 1:{
		cout<<"\nEnter element:";
		cin>>ele;
		if(!obj.AddAtBeginQueue(ele))
		{
			cout<<"\nSomething went wrong!"<<endl;
		}
		else
		{
			cout<<"\nSuccess!Added at Beginning"<<endl;
		}
	}break;
	case 2:{
		cout<<"\n"<<obj.DeleteFromBeginQueue()<<endl;
	}break;
	case 3:{
		cout<<"\nEnter element:";
		cin>>ele;
		if(!obj.AddAtEndQueue(ele))
		{
			cout<<"\nSomething went wrong!"<<endl;
		}
		else
		{
			cout<<"\nSuccess!Added at Beginning"<<endl;
		}
	}break;
	case 4:{
		cout<<"\n"<<obj.DeleteFromEndQueue()<<endl;
	}break;
	case 5:{
		if(obj.isEmpty())
		{
			cout<<"\nLinked List is Empty!"<<endl;
		}
		else
		{
			cout<<"\nLinked List is not Empty!"<<endl;
		}
	}break;

}
}while(ch!=6);

return 0;
}
