#include "atm.h"
#include<iostream>


void ATM::display_balance()
{
	std::cout << "Balance: " << customer.get_account().get_balance();
}

void ATM::diposit(double amt)
{
	BankAccount& act = customer.get_account();
	act.deposit(amt);
}

void ATM::withdraw(double amt)
{
	customer.get_account().withdraw(amt);
}

void ATM::display_transactions() const
{
	out << "     Type:    " << "     Amount     " << "    Balance     ";

	for (auto tran : customer.get_account().get_transactions()) //get_account().get_transactions --> a vector
	{
		std::cout << tran;
	}

}
