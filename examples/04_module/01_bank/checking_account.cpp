#include "checking_account.h"

double CheckingAccount::get_balance()
{
	std::cout << "CheckingAccount::get_balance()";
	return BankAccount::get_balance();
}
