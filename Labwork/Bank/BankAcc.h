#ifndef BANKACC_H
#define BANKACC_H

#include<iostream>

using namespace std;

class BankAcc
{

	public:
		float amount=0;
		virtual void Deposite(float amount)=0;
		virtual void Withdraw(float amount)=0;
};

#endif
