#include "atm.h"
#include<iostream>

void ATM::display_balance()
{
	std::cout << "Balance: " << account.get_balance();
}