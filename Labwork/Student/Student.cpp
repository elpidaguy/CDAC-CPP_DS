#include "Student.h"
using namespace std;

Student::Student():rollno(0), name("John Doe"), percentage(100), course("DAC"){};
Student::Student(int p_rollno, string p_name, float p_percentage, string p_course){
	rollno = p_rollno;
	name = p_name;
	percentage = p_percentage;
	course = p_course;
}

void Student::accept()
{
	cout<<"Enter Student Info:"<<endl;
	cout<<"Enter Course:";
	cin>>course;
	cout<<"\nEnter Roll No: ";
	cin>>rollno;
	cout<<"\nEnter Name:";
	cin>>name;
	cout<<"\nEnter Percentage: ";
	cin>>percentage;
}

void Student::display() const {

	cout<<"Student Info: ";
	cout<<"\nCourse: "<<this->course;
	cout<<"\nRoll no: "<<this->rollno;
	cout<<"\nName: "<<this->name;
	cout<<"\nPercentage: "<<this->percentage<<endl;
}

int Student::getStudent() const {
	return this->rollno;
}
