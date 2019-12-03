#include<iostream>
#include"Player.h"
using namespace std;

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

int Player::getAge() const
{
	return age;
}
string Player::getName() const
{
	return (string)name;
}
string Player::getCountry() const
{
	return (string)country;
}


Player::~Player()
{}
