#include<iostream>
#include<cstring>
using namespace std;

class Employee
{	
	private:
		int emp_id;
		char name[20];
		float sal;
	
	public:
		//Employee():emp_id(1), name("Kaustubh"), sal(45000.00)
//	{};
		Employee(){
			 emp_id=1;
			 strcpy(name,"NAME");
			 sal=100;

		};

		Employee( int dempid, char ename[20], float esal)
		{
			emp_id=dempid;
			strcpy(name,ename);
			sal=esal;
		}	
		int Display()
		{	
		
			cout<<"\nEmployee ID: "<<emp_id<<"\t Employee Name: "<<name<<"\tSalary of "<<name<<": "<<sal;
		
		}

		void Accept(){
			char c;		
			cout<<"\nPlease enter Employee Id: ";
			cin>>emp_id;
			cout<<"\nPlease enter Employee Name: ";
			//getline(cin,(name[20]));
			cin>>name;
			cout<<"\nPlease enter Salary of "<<name<<": ";
			cin>>sal;
		
		};
};
int main()
{
	for(int i=0;i<6;i++)
	{	
	Employee e[i];
	e[i].Accept();
	e[i].Display();
	}
}

