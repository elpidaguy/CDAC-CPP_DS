#include"TreeNode.cpp"
#include"BST.cpp"

#include<iostream>
using namespace std;
int  main()
{
	int ch,a;	
	BST<int> obj;
	
	do
	{
		cout<<"\n1. Insert"
		<<"\n2. InOrder"
		<<"\n3. PreOrder"
		<<"\n4. PostOrder"
		<<"\n5. Find Min"
		<<"\n6. Find Max"
		<<"\n7. Search"
		<<"\n8. Height"
		<<"\n9. Exit"
		<<"\n\nEnter Your Choice : ";
		cin>>ch;
		switch(ch)
		{

			case 1:
			cout<<"Enter an element : ";
			cin>>a;
			try{obj.insert(a);}catch(runtime_error e){cout<<e.what();}
			break;
			case 2:
			BST<int>::InOrder(obj.GetRootNode());
			break;
			case 3:
			BST<int>::PreOrder(obj.GetRootNode());
			break;
			case 4:
			BST<int>::PostOrder(obj.GetRootNode());
			break;
			case 5:
			cout<<BST<int>::FindMin(obj.GetRootNode())->getData()<<endl;
			break;
			case 6:
			cout<<BST<int>::FindMax(obj.GetRootNode())->getData()<<endl;
			break;
			case 7:
				int n;
				cout<<"\n Enter value to search: ";
				cin>>n;
				obj.search(n) ? cout<<"Found" : cout<<"not found";
				break;
			case 8:	{
				int height = BST<int>::HeightOfTree(obj.GetRootNode());
				cout<<"Height of tree:"<<height<<endl;
				}
			break;
			case 9:
				break;
			default:cout<<"Invalid Choice";
		}
	}while(ch != 9);
}
