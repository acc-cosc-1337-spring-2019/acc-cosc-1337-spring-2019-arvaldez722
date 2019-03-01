#include "atm.h"
#include <iostream>

int main() 
{
	
	BankAccount account(123456, 500);
	Customer customer(account);
	ATM atm(customer);
	atm.display_balance();
	std::cout << copy.get_balance();
	/*
	BankAccount account(12345689, 500);
	BankAccount account1(55545689, 5000);

	accounts.push_back(account);
	accounts.push_back(account1);

	for (auto act : accounts)
	{
		std::cout << act.get_balance() << "\n";
	}*/

	return 0;
}