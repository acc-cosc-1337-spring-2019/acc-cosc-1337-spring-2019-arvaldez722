#include "customer.h"

#ifndef ATM_H
#define ATM_H

class ATM 
{
public:
	ATM(Customer& c) : customer(c) {}
	void display_balance();
	void deposit(double amt);
	void withdraw(double amt);
	void display_transactions()const;
private:
	Customer& customer;
};

#endif // !ATM_H