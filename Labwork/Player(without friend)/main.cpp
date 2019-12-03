#include<iostream>
#include"Player.h"
using namespace std;

int main(){
	int n;
	Player defaultP{};
	Player s;
	cout<<"\nDefault Player: ";
	defaultP.display();
	
	Player p1{23,"virat","india"};
	cout<<"\nParameterized Player: ";
	p1.display();

	cout<<"\nEnter the number of players: ";
	cin>>n;

	Player p[n];

	for(int i=0;i<n;i++)
	{
		p[i].accept();
	}

	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			s.sortByAge(p[j],p[j+1]);
		}
	}

	for(int i=0;i<n;i++)
	{
		cout<<"\nSorted Array is: "<<endl;
		p[i].display();
	}
	
	return 0;

}

