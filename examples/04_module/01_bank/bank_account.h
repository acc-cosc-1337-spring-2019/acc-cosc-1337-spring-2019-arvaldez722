#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include "transaction.h"
#include<iostream>
#include<vector>

class BankAccount
{
public:
	BankAccount(int act, double bal);
	virtual double get_balance();
	void deposit(double amount);
	void deposit(int pin, double amount);
	void withdraw(double amount);
	std::vector<Transaction> get_transactions()const;
	friend void display(const BankAccount& act);
	friend BankAccount operator +(BankAccount& act1, 
		                          const BankAccount& act2);
	friend std::ostream & operator << (std::ostream & out, 
		                               const BankAccount & b);
private:
	std::vector<Transaction> transactions;
	int account_number;
	double balance;
	bool amount_greater_zero(double amount);
};

# endif // !BANK_ACCOUNT_H