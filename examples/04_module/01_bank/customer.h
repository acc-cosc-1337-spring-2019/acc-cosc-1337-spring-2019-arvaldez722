#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "bank_account.h"

class Customer 
{
public:
	Customer(BankAccount& act) : account(act) {}
	BankAccount& get_account();
private:
	BankAccount& account;

};

#endif // !CUSTOMER_H
