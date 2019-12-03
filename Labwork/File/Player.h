#include<iostream>
using namespace std;

class Player
{
	private:
		int age;
		char name[50];
		char country[50];

	public:
		void display() const;
		void accept();
		int getAge() const;
		string getName() const;
		string getCountry() const;
		~Player();
};
