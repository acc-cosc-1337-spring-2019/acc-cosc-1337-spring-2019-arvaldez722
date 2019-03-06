#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#incldue <iostream>

class BankAccount 

{
public:
	BankAccount(int act, double bal);//constructor
	double get_balance() const;
	void deposit(double amount);
	void withdraw(double amount);

	friend void display(const BankAccount& act);
	friend BankAccount operator +(BankAccount& act, const BankAccount& act2);

	std::ostream & operator<<(std::ostream & out, const BankAccount & b);
private:
	int account_number;
	double balance;
	bool amount_greater_zero(double amount);
};

#endif //!BANK_ACCOUNT_H