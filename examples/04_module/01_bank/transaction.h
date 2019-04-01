#ifndef TRANSACTION_H
#define TRANSACTION_H
#include<string>
#include<iostream>

class Transaction
{
public:
	Transaction(const std::string t, double amt, double bal) :
		type(t), amount(amt), balance(bal) {}
	friend std::ostream & operator << (std::ostream & out,
		const Transaction &t);
private:
	std::string type;//"Deposit" "Withdraw" "Inquiry"
	double amount;
	double balance;
};

#endif // !TRANSACTION_H
