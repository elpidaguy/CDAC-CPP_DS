
#include "MobilePhone.h"
using namespace std;
		
		MobilePhone::MobilePhone():ModelNo("00"), Price("00"),Manufacturer("MM"),Quantity("00"){};
		

		MobilePhone::MobilePhone(string dModelNo, string dPrice, string dManufacturer, string dQuantity): ModelNo(dModelNo), Price(dPrice), Manufacturer(dManufacturer), Quantity(dQuantity){};		

		void MobilePhone::Display() const 
		{
			cout<<"\nThe Info of Model - "<<ModelNo<<" is: "<<endl;
			cout<<"Price: "<<Price<<endl;
			cout<<"Manufacturer: "<<Manufacturer<<endl;
			cout<<"Quantity: "<<Quantity<<endl;
		}

		void MobilePhone::Accept() {
			cout<<"\nEnter New Model Information: ";
			cout<<"\nEnter Model Number: ";
			cin>>ModelNo;
			cout<<"\nEnter Price: ";
			cin>>Price;
			cout<<"\nEnter Manufacturer: ";
			cin>>Manufacturer;
			cout<<"\nEnter Quantity: ";
			cin>>Quantity;
		}


		void MobilePhone::CheckQuant( string s) const {
			if(s== this->ModelNo)	{
				//Display();
			cout<<"\n Available Quantity for Model "<<ModelNo<<" is: "<<Quantity<<endl;		
			}		
		}
		
		
		void MobilePhone::CheckAvail( string s) const {
			if(s== this->ModelNo)	{
				//Display();
			//cout<<"\n Available Quantity for Model "<<ModelNo<<" is: "<<Quantity<<endl;	
				int q = stoi(Quantity);	
				cout<<q;
				if(q > 0)
					{
					cout<<"\n Model is available.";
				}
				else
				{
					 cout<<"\nModel is out of Stock";
				}			
							
			}		
		}

