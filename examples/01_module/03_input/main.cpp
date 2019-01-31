#include<iostream>
#include "input.h"

using std::cout;
using std::cin;

int main() 
{
	double units;
	cout << "Enter units: ";
	cin >> units;

	double rate;
	cout << "Enter rate: ";
	cin >> rate;

	double total = get_total(units, rate);
	cout << "Total: " <<total;
	
	
	return 0;
}