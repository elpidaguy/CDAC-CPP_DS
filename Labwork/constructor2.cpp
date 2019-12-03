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
		Employee():emp_id(1), name("Kaustubh"), sal(45000.00){};

//		Employee(int dempid, char ename[20], float esal):emp_id(dempid), name(ename), sal(esal){};

		
		Employee(int dempid, char ename[20], float esal){
			emp_id=dempid;
			strcpy(name,ename);
			sal=esal;

		}
		int Display()
		{	
		
			cout<<"\nEmployee ID: "<<emp_id<<"\t Employee Name: "<<name<<"\tSalary of "<<name<<": "<<sal<<endl;
		
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
	Employee e[2];
	for(int i=0;i<2;i++)
	{
	e[i].Accept();
	e[i].Display();

	}
	
	char k="Gajanan";
	//strcpy(ename,k);
	Employee e1 (1,k,60000.00);
	
	e1.Display();


}
