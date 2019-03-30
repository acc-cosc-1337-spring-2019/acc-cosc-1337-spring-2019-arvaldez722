#include "atm.h"
#include<iostream>

using std::cout;

void ATM::display_balance()
{
	cout << "Balance: " << customer.get_account().get_balance();
}

void ATM::deposit(double amt)
{
	customer.get_account().deposit(amt);
}

void ATM::withdraw(double amt)
{
	customer.get_account().withdraw(amt);
}

void ATM::display_transactions() const
{
	cout << "Type   " << "Amount  " << " Balance  ";

	for (auto tran : customer.get_account().get_transactions()) 
	{
		std::cout << tran;
	}
}
