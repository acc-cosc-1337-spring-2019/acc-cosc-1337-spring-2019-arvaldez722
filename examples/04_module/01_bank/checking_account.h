#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "bank_account.h"


class CheckingAccount : public BankAccount 
{
public:
	CheckingAccount(int act, double bal): 
		BankAccount(act, bal) {}
	double get_balance();

};

#endif // !CHECKING_ACCOUNT_H
