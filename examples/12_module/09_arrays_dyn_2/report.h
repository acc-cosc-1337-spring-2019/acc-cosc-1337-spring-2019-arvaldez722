//
#include "examples/12_module/08_arrays_dyn_1/bank_account.h"

#include "bank_account.cpp"
#ifndef REPORT_H
#define REPORT_ H

class Report
{
public:
	Report();
	~Report();
	void display();
private:
	BankAccount* accounts;
};
#endif // !REPORT_H
