#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include"bank_account.h"

class SavingsAccount : public BankAccount //<--- inherit from bankaccount
{
public:											//initializer list below
	SavingsAccount(int act,double bal, float i = .9) :
		BankAccount(act, bal), interest_rate(i) {}

	void add_interest_earned();

private:
	const float interest_rate;
	const float time = 1.0 / 12.0;
};

#endif 