#include<iostream>
using namespace std;

class Date
{
	private:
		int dd;
		int mm;
		int yyyy;

	public:
		Date();
		Date(int dd, int mm, int yyyy);
		void display() const;
		void accept();
		//void compare(Date d1);
		int& operator+(Date d1);
		int& operator-(Date d1); //difference
		int& operator==(Date d1); //compare
		int& operator!=(Date d1); //compare
		~Date();
};
