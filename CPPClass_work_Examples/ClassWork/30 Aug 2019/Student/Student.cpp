#include "Address.cpp"
class Student
{

	private:
	string  rollno;
	string  name;
	Address add;


	public:
	Student():rollno(""),name(""){
		cout<<"\n Stduent::CTOR"<<endl;
	}

	void Accept(){
	cout<<"\n Enter rollno"<<endl;
	cin>>rollno;
	cout<<"\n Enter name"<<endl;
	cin>>name;
	cout<<"\n Enter address"<<endl;
	//contained object function call
	add.Accept();

	}

	void Display(){
	cout<<"\n Roll No="<<rollno<<endl;
	cout<<"\n Name ="<<name<<endl;
	add.Display();
	}

};


int main()
{
	Student s;
	s.Accept();
	s.Display();

	return 0;
}

