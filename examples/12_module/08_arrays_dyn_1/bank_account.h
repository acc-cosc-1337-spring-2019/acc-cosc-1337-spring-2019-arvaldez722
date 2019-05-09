#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{
public:
	BankAccount() = default; 
	BankAccount(int b) : balance(b) {}
	int get_balance()const;
private:
	int balance{ 0 };
};


#endif