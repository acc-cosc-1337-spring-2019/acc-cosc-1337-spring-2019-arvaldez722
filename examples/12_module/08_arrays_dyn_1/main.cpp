#include "examples/12_module/08_arrays_dyn_1/bank_account.h"
#include <iostream>
int main()
{
	//stack/static array of objects
	BankAccount accounts[5];
	//read data file or database
	//initalize the balances

	for (auto account : accounts) {
		std::cout << account.get_balance() << std::endl;
	}

	//read data file or database
	BankAccount accouts1[] = { BankAccount(5), BankAccount(10), BankAccount(50), BankAccount(100) };
	//write code to display balances

	return 0;
}