#ifndef CACC_H
#define CACC_H

#include"BankAcc.h"

class CurrentAcc: public BankAcc 
{
	private:
		float amount;
		float interestRate;
		float totalBal;
	public:
		CurrentAcc();
		void Deposite(float amount);
		void Withdraw(float amount);
		virtual void CalcInterest();
		virtual void DisplayBal() const;
};

#endif
