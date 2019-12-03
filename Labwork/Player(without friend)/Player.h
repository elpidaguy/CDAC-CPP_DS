#include<iostream>
using namespace std;

class Player
{
	private:
		int age;
		string name;
		string country;

	public:
		Player();
		Player(int age, string name, string country);
		void display() const;
		void accept();
		void sortByAge(Player &a, Player &b);
		~Player();
};
