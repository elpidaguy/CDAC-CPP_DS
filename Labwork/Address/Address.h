#include<iostream>
#include<string>
using namespace std;

class Address
{
	private:
		string houseNo;
		string colony;
		string area;
		string city;
		string pincode;

	public:
		Address();
		Address(string houseNo, string colony, string area, string city, string pincode);
		void display() const;
		void accept();
		bool operator==(Address a1);
		~Address();
};
