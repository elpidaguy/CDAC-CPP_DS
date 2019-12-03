
#include "MobilePhone.h"
using namespace std;

int main()
{	
	int ch,n,index=0;
	string str;	
	MobilePhone Mp1;
	cout<<"\nDefault CTOR"<<endl;
	Mp1.Display();

	MobilePhone Mp("888880","54000","Mobike","1200");
	cout<<"\n Parameterized CTOR"<<endl;
	Mp.Display();

	cout<<"\nEnter Total Number of Mobiles: ";
	cin>>n;
	MobilePhone mp[n+1];
	
	//Mp1.Accept();
	//Mp1.Display();
	
	do
	{	cout<<"\n **********************************************************"<<endl;
		cout<<"\n Choose from below";
		cout<<"\n 1.Add Mobile Model";
		cout<<"\n 2.Display available Mobile";
		cout<<"\n 3.Check Quantity of a Mobile";
		cout<<"\n 4.Check availability of Mobile ";
		cout<<"\n 5.Exit"<<endl;
		cout<<"\n **********************************************************"<<endl;
		cin>>ch;	
		
		switch(ch)
			{
			case 1: 
			cout<<"\n Enter Index for New Mobile: ";
			cin>>index;			
			mp[index].Accept();
			break;
			case 2: 
				for (int i=1;i<n+1;i++)
				{
					mp[i].Display();
				}					
			
				break;

			case 3:
				cout<<"Enter Model Number Of mobile: "<<endl;
				cin>>str;
				for(int i=1; i<n+1 ;i++)
				{
					mp[i].CheckQuant(str);
				}				
			
				break;
			case 4:
				cout<<"Enter Model Number Of mobile: "<<endl;
				cin>>str;
				for(int i=1; i<n+1 ;i++)
				{
					mp[i].CheckAvail(str);
				}				
			
			
				break;
			case 5:
				cout<<"Thank You!!"<<endl;
				break;		
			default: 
				cout<<"\n PLEASE CHOOSE VALID OPTION!!"<<endl;
			//	Choice();
				}
			}

	while ( ch!= 5 );

return 0;

}
