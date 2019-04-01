#include "atm.h"
#include "savings_account.h"
#include "checking_account.h"
#include<iostream>
#include<vector>
#include<functional>

using std::vector;

int main()
{
	SavingsAccount s(12345, 1000);
	std::cout << s.get_balance()<<"\n";

	BankAccount& b = s;
	std::cout << b.get_balance()<<"\n";

	CheckingAccount c(54321, 500);
	std::cout << c.get_balance() << "\n";

	BankAccount& d = c;
	std::cout << d.get_balance() <<"\n";

	vector < std::reference_wrapper<BankAccount>> accounts{ s, c };

	for (auto & account : accounts)

	{ //account must be unwrapped with .get() to get the instance of Account

		std::cout << account.get().get_balance() << std::endl;

	}


	/*BankAccount account(123456, 500);
	Customer customer(account);
	ATM atm(customer);

	atm.display_balance();
	atm.deposit(50);
	atm.display_balance();

	
	BankAccount b(1, 900);
	BankAccount c = account + b;
	//std::cout << c;
	//std::cin << c;
	std::cout << "\n";
	std::cout << c <<"\n";*/

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