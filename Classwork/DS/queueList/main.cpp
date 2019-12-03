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
cout<<"\n 1. Add Queue";
cout<<"\n 2. Delete Queue";
cout<<"\n 3. Check Empty";
cout<<"\n 4. Exit";
cout<<"\n Enter your choice:";
cin>>ch;
cin.get();

switch(ch)
{
	case 1:{
		cout<<"\nEnter element:";
		cin>>ele;
		if(!obj.AddQueue(ele))
		{
			cout<<"\nSomething went wrong!"<<endl;
		}
		else
		{
			cout<<"\nSuccess!Added at Beginning"<<endl;
		}
	}break;
	case 2:{
		cout<<"\n"<<obj.DeleteQueue()<<endl;
	}break;
	case 3:{
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
}while(ch!=4);

return 0;
}
