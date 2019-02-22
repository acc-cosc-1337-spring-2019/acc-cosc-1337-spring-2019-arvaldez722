class BankAccount 
{
public:
	BankAccount(int act, double bal);//constructor
	double get_balance() const;
	void deposit(double amount);
	void withdraw(double amount);



private:
	int account_number;
	double balance;

};