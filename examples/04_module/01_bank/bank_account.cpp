#include "bank_account.h"

BankAccount::BankAccount(int act, double bal) :
	account_number(act), balance(bal)
{
}

double BankAccount::get_balance() const
{
	return balance;
}

void BankAccount::deposit(double amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
}

void BankAccount::withdraw(double amount)