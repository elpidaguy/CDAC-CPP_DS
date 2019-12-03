#include"CurrentAcc.h"

		CurrentAcc::CurrentAcc():amount(0.0),interestRate(0.04),totalBal(0.0){};
		
		void CurrentAcc::Deposite(float amount){
			this->totalBal = this->totalBal + amount;
			DisplayBal();
		};
		
		void CurrentAcc::Withdraw(float amount){
			this->totalBal = this->totalBal - amount;
			DisplayBal();
		};
		void CurrentAcc::CalcInterest()
		{
			this->interestRate = (interestRate)*(0.055)*(1);
			cout<<"\nInterest with IR 5.5pcpa is: "<<this->interestRate;
		};
		
		void CurrentAcc::DisplayBal() const {
		
			cout<<"\nYour Balance is: ";
			cout<<this->totalBal;
		};
