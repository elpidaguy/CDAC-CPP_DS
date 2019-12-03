#include<iostream>
using namespace std;

class Player
{
	private:
		int age;
		char name[50];
		char country[50];

	public:
		//Player();
		//Player(int age, char name, string country);
		void display() const;
		void accept();
		//friend void sortByAge(Player &a, Player &b);
		~Player();
};

//void sortByAge(Player &a, Player &b);
