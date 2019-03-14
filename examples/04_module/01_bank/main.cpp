#include "atm.h"
#include<iostream>
#include"savings_account.h"
#include"checking_account.h"
#include"bank_account.h"
#include <vector>


int main()
{
	SavingsAccount s(12345, 1000);
	std::cout << s.get_balance() <<"\n"

	BankAccount& b = s; //bankaccount ref to savingsaccont
	std::cout << b.get_balance;
	
	CheckingAccount c(54321, 500);
	std::cout << c.get_balance() << "\n";

	BankAccount& d = c;
	std::cout << c.get_balance() << "\n";

	std::vector<std::reference_wrapper<BankAccount>> accounts{ s,c };

	for (auto & account : accounts)
	{ //account must be unwrapped with .get() to get the instance of Account

			std::cout << account.get().get_balance() << std::endl;

	}


	/*int num = 5;
	int& num_ref = num;
	std::cout << num_ref; //saves memory address of num to num_ref

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