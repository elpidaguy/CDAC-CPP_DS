#include<iostream>
using namespace std;

class Calculator {

	private:
		int a,b, c=0, ch;

	public:
		int accept()
		{
			cout<<"\nEnter the value for A: ";
			cin>>a;
			cout<<"\nEnter the value for B: ";
			cin>>b;
			cout<<"\nValue for A and B is: "<<a<<" and "<<b;
		}

		int choice()
		{
		cout<<"\nWelcome to calculator:"<<endl;
		cout<<"1.Addition"<<endl;
		cout<<"2.Subtraction"<<endl;
		cout<<"3.Multiplication"<<endl;
		cout<<"4.Division"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"Enter the choice: ";
		cin>>ch;

		switch(ch) {
			case 1:
				accept();
				add();
				choice();
				break;
			case 2:
				accept();
				sub();
				choice();
				break;
			case 3:
				accept();
				mul();
				choice();
				break;
			case 4:
				accept();
				div();
				choice();
				break;
			case 5:
				break;
			default:
				cout<<"Please Select Valid Input."<<endl;
				choice();
			}
		}

		int add()
		{
			c = a+b;
			cout<<"\nAddition is: "<<c<<endl;

		}

		int sub()
		{
			c=a-b;
			cout<<"\nSubtraction is: "<<c<<endl;
		}

		int mul()
		{
			c=a*b;
			cout<<"\nMultiplication is: "<<c<<endl;
		}

		int div()
		{
			if(b==0)
			{
			cout<<"\nCannot Divide by Zero!!!"<<endl;
			return 0;
			}
			else
			{
			c=a/b;
			}
		}

};

int main()
{
	int ch;
	Calculator calc;
	calc.choice();

return 0;
}
