#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "bank_account.h"

class Customer 
{
public:			//make BA a ref use for midterm
	Customer(BankAccount& act) : account(act) {} //this is an initalizer list 
	
	BankAccount& get_account();

private:
	BankAccount& account;

};

#endif // !CUSTOMER_H
