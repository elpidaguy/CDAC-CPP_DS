#include"CurrentAcc.h"
#include"SavingAcc.h"

int main()
{
int ch, ch1, ch2;
float amt=0.0f;
BankAcc *ba = NULL;
CurrentAcc ca;
SavingAcc sa;

do{
	cout<<"\nWelcome to DAC Bank: ";
	cout<<"\nSelect Account: ";
	cout<<"\n1.Savings Account";
	cout<<"\n2.Current Account";
	cout<<"\n3.Exit"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<"\nSelect Savings Account Choice:";
			cout<<"\n1.Deposit Money";
			cout<<"\n2.Withdraw Money";
			cout<<"\n3.Calculate Interest";
			cout<<"\n4.Check Balance"<<endl;
			cin>>ch1;
			switch(ch1)
			{
				case 1:
					cout<<"\nEnter Amount to Deposite: ";
					cin>>amt;
					ba = &sa; //upcasting
					ba->Deposite(amt);
					//sa.Deposite(amt);
					break;
				case 2:
					cout<<"\nEnter Amount to Withdraw: ";
					cin>>amt;
					ba = &sa; //upcasting
					ba->Withdraw(amt);
					break;
				case 3:
					sa.CalcInterest();
					break;
				case 4:
					sa.DisplayBal();
					break;
			}
			
			break;
			
		case 2:
			cout<<"\nSelect Current Account Choice:";
			cout<<"\n1.Deposit Money";
			cout<<"\n2.Withdraw Money";
			cout<<"\n3.Calculate Interest";
			cout<<"\n4.Check Balance"<<endl;
			cin>>ch2;
			
			switch(ch2)
			{
				case 1:
					//ba = &ca;
					//ba->Deposite();
					cout<<"\nEnter Amount to Deposite: ";
					cin>>amt;
					ca.Deposite(amt);
					break;
				case 2:
					cout<<"\nEnter Amount to Withdraw: ";
					cin>>amt;
					ca.Withdraw(amt);
					break;
				case 3:
					ca.CalcInterest();
					break;
				case 4:
					ca.DisplayBal();
					break;
			}
			
			break;
	}
}
while(ch != 3);
cout<<"\nThank You!";
return 0;
}
