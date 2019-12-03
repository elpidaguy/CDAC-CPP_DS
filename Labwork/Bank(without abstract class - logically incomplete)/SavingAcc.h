#ifndef SACC_H
#define SACC_H

#include"BankAcc.h"

class SavingAcc: public BankAcc 
{
	private:
		float amount;
		float interestRate;
		float totalBal;
	public:
		SavingAcc();
		void Deposite(float amount);
		void Withdraw(float amount);
		void CalcInterest();
		void DisplayBal() const;
};

#endif
