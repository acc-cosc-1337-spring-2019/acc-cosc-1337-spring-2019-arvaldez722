#include "checking_account.h"

double CheckingAccount::get_balance()
{
	std::cout << "CheckingAccount::get_balance()";
	//showing funtion overriding 
	return BankAccount::get_balance();
}
