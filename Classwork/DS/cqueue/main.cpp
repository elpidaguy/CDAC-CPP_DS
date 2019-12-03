#include"Queue.h"

int main()
{

int choice;
Queue<int> objQueue(5);

do
{
cout<<"\n *********MENU************";
cout<<"\n 1. Add";
cout<<"\n 2. Del";
cout<<"\n 3. Exit";
cout<<"\n Enter your choice:"<<endl;
cin>>choice;
cin.get();

switch(choice)
{
case 1:	{
	int ele;
	cout<<"\n Enter element:"<<endl;
	cin>>ele;
	
	try
	{
		objQueue.addQueue(ele);
	}
	catch(runtime_error e)
	{
		cout<<"\n"<<e.what()<<endl;
	}
	}break;

case 2:	{
		
		try{
		 int ele = objQueue.delQueue();
		 cout<<"\n Deleted element :"<<ele;
		}
		catch(runtime_error e)
		{
		cout<<"\n"<<e.what()<<endl;
		}
		
	}break;
}
}while(3!=choice);

return 0;
}
