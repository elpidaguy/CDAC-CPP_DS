#include<iostream>
#include<list>
#include<iterator>

using namespace std;

void display(list<int> g)
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 

int main()
{

list<int> obj,obj2;
int ch;

do{

cout<<"1.add"<<endl;
cout<<"2.remove"<<endl;
cout<<"3.reverse"<<endl;
cout<<"4.swap"<<endl;
cout<<"5.remove"<<endl;
cout<<"6.Display"<<endl;
cout<<"7.exit"<<endl;
cin>>ch;

switch(ch)
{
	case 1:{
		int k;
		cout<<"\nEnter Element: ";
		cin>>k;
		obj.push_back(k);
		obj2.push_front(k);
		display(obj);
		display(obj2);
		}break;
	case 2:{
		obj.pop_back();
		obj2.pop_front();
		display(obj);
		display(obj2);
	}break;
	case 3:{
		obj.reverse();
		obj2.reverse();
		display(obj);
		display(obj2);
	}break;
	
	case 4:{
	
		obj.swap(obj2);
		//obj2.swap();
		display(obj);
		//display(obj2);
	}break;
	case 6:{
	
		display(obj);
		display(obj2);
	}break;
}
}while(ch!= 7);

return 0;
}
