#include "if_else.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	double year;

	cout << "Enter year: ";
	cin >> year;

	cout << get_generation(year);
	
	return 0;
}