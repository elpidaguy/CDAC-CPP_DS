#include<iostream>
#include"Player.h"
using namespace std;

//Player::Player():age(10), name("gur"), country("india"){};
//Player::Player(int age=0, string name="", string country=""): age(age), name(name), country(country){};

void Player::accept()
	{
	
	cout<<"\nPlease Enter age: ";
	cin>>age;
	
	cout<<"\nPlease Enter the name: ";
	cin>>name;
	cin.get();
        cout<<"\nPlease Enter The country: ";
	cin>>country;
	}

void Player::display() const
{
	cout<<"\nPlayer Info : "<<endl;
        cout<<"Age of Player : "<<age<<endl;
        cout<<"Name of Player : "<<name<<endl;
	cout<<"Country of Player: "<<country<<endl;
	cout<<"\n";
}

/*
void sortByAge(Player &a,Player &b)
{
	cout<<"\nInside sort by array";
	if(a.age > b.age)
	{
		int x = a.age;
		a.age = b.age;
		b.age = x;

		string y = a.name;
		a.name = b.name;
		b.name = y;

		string z = a.country;
		a.country = b.country;
		b.country = z;
	}
} */	


Player::~Player()
{}
