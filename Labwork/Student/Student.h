#include<iostream>
using namespace std;

class Student
{

	private:
		int rollno;
		string name;
		float percentage;
		string course;

	public:
		Student();
		Student(int p_rollno, string p_name, float p_percentage, string p_course);
		void accept();
		void display() const;
		int getStudent() const;
};
