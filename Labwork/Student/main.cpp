#include "Student.h"
using namespace std;

int main()
{
	int search, res, n;
Student p_s{1,"Kaustubh",100,"DAC"};
p_s.display();

cout<<"\nEnter no of Records to be inserted: ";
cin>>n;
cout<<"\n";

Student *s = new Student[n];

for(int i=0;i<n;i++)
{
	s[i].accept();
}

for(int i=0;i<n;i++)
{
	s[i].display();
	cout<<"\n";
}

cout<<"\n\nEnter Roll No of Student to be searched: ";
cin>>search;

for(int i=0;i<n;i++)
{
	res = s[i].getStudent();
	if(res == search)
	{
		cout<<"\nRecord Found: ";
		s[i].display();
	}
}

return 0;
}
