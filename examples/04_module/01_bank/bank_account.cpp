#include "bank_account.h"

BankAccount::BankAccount(int act, double bal) :
	account_number(act), balance(bal)
{
}

double BankAccount::get_balance() const
{
	return balance;

}


void BankAccount::withdraw(double amount)
{
	if (amount > 0 && balance >= amount)
	{
		balance -= amount;

	}
}

bool BankAccount::amount_greater_zero(double amount)
{
	return amount > 0;

}