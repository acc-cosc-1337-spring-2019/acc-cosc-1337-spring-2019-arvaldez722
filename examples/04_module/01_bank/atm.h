#include "bank_account.h"
#ifndef ATM_H
#define ATM_H

class ATM
{
public:
	void display_balance();

private:
	BankAccount account;

};
#endif // !ATM_H
