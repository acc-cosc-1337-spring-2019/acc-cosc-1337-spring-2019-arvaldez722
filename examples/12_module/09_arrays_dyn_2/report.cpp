//
#include "report.h"

Report::Report()
{
	//read file from database
	accounts = new BankAccount[5];
	//iterate to update balance
	accounts[0].get_balance();

}
void Report::display()
{
	for (int i = 0; i < 5; ++i) {
		std::cout << accounts[i]->get_balance() << std::endl;
	}

}

Report::~Report
{
	std::cout << "Clear Array" << std::endl;


}