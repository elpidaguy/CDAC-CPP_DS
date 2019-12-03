#include<iostream>
#include<string>
using namespace std;

class PaySlip
{
	private:
	string EmpNo;
	string EmpName;
	int DA;
	int HRA;
	int BasicSalary;
	public:
		PaySlip();
		PaySlip(string EmpNo, string EmpName, int DA,int HRA, int BasicSalary);
		void display() const;
		void accept();
		int calcSalary();
		~PaySlip();
};
