#include<iostream>
#include"Player.h"
#include<fstream>
using namespace std;

int main(){
	int n,ch;
	Player p1;
	char fname[50];
	
	do{
	cout<<"\n Welcome to File Handling for Player Class: ";
	cout<<"\n1.Read file";
	cout<<"\n2.Write into file";
	cout<<"\n3.Exit"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:{
			cout<<"\n Enter File Name: ";
			cin>>fname;
			ifstream fin(fname,ios::binary);
			if(!fin)
			{
				cout<<"\n Unable to Open File.";
			}
			while(fin.read((char*)&p1,sizeof(Player)))
			{
				cout<<"\n*******************"<<endl;
				p1.display();
				cout<<"\n*******************"<<endl;
			}
			fin.close();
			break;
			}
		case 2:{
			cout<<"\n Enter File Name: ";
			cin>>fname;
			ofstream fout(fname,ios::app|ios::binary);
			if(!fout)
			{
				cout<<"\n Unable to Open File.";
			}

			cout<<"\nEnter the number of players: ";
			cin>>n;

			Player p[n];

			for(int i=0;i<n;i++)
			{
				p[i].accept();
				fout.write((char*)&p[i], sizeof(Player));
			}

			fout.close();
			break;
			}
	}
	}while(ch != 3);
	cout<<"\n Thank You!!";
	
	return 0;

}

