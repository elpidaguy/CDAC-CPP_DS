#include<iostream>
#include<string>
using namespace std;

class MobilePhone {

	private:
		string ModelNo;
		string Price;
		string Manufacturer;
		string Quantity;
	public:
		
		MobilePhone();
		MobilePhone(string ModelNo, string Price, string Manufacturer, string Quantity);
		
		void Display() const ;

		void Accept() ;
		
		void CheckQuant( string s) const;
		void CheckAvail( string s) const;
};
