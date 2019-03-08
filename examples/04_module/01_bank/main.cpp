#include "atm.h"
#include<iostream>

int main()
{
	BankAccount account(123456, 500); //now since we called bankaccount a ref it doesn't create a copy
	Customer customer(account);
	ATM atm(customer);
	atm.display_balance();
	
	BankAccount b(1, 900);
	BankAccount c = account + b;
	//std::cout << c;
	//std::cin << c;
	std::cout << "\n";
	std::cout << c <<"\n";

			/*std::vector<BankAccount>accounts;
			BankAccount account(12345689, 500);  //object1
			BankAccount account1(55545689, 5000); //object2

			accounts.push_back(account);
			accounts.push_back(account1);

			for (auto act : accounts)
			{
			std::cout << act.get_balance() << "\n";
			}*/

			/*
	
			for(auto tic_tac_toe: list)
			{
			cout<<tic_tac_toe<<"\n";
			}
	
			*/

	return 0;
}