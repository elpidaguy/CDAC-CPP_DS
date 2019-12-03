#include"SavingAcc.h"
		
		SavingAcc::SavingAcc():amount(0.0),interestRate(0.04),totalBal(0.0){};
		
		void SavingAcc::Deposite(float amount){
			this->totalBal = this->totalBal + amount;
			DisplayBal();
		};
		
		void SavingAcc::Withdraw(float amount){
			this->totalBal = this->totalBal - amount;
			DisplayBal();
		};
		void SavingAcc::CalcInterest()
		{
			this->interestRate = (totalBal)*(0.04)*(1);
			cout<<"\nInterest with IR 4pcpa is: "<<this->interestRate;
		};
		
		void SavingAcc::DisplayBal() const {
		
			cout<<"\nYour Balance is: ";
			cout<<this->totalBal;
		};
