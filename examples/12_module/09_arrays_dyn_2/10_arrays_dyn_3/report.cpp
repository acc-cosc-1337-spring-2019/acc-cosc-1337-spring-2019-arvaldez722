//
#include "report.h"

Report::Report()
{
	//read file from database
	for (int i = 0; i < 5; ++i) {
		accounts[i] = new BankAccount(i * 100);

	}
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
	for (int i = 0; i < 5; ++1) {
		std::cout << "Clear element" << std::endl;
		delete accounts[i];
		accounts[i] = nullptr;
}



}
