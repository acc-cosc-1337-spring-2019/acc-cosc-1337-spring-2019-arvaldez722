#ifndef TRANSACTION_H
#define TRANSACTION_H
#include<string>

enum Types
{
	inquiry,
	deposit,
	withdraw
};
class Transaction
{
public:
	Transaction(const std::string t, double amt, double bal) : 
		type(t), amount(amt), balance(bal) {} //constructor

	friend std::ostream & operator << (std::ostream & out,
		const Transaction &t);



private:
	double balance;
	Types t; //types of transactions are deposit withdraw and inquiry 

	double amount; //rather than create 2 for withdraw and depsit you can do both @ once
};

#endif //! TRANSACTION_H
