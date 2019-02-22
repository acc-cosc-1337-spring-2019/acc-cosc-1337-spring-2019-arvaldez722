#include<iostream>
#include"loops.h"

using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main()
{
	char choice;
	int num;

	do
	{
		cout << "Please Enter Number: ";
		cin >> num;
		cout << "The Factorial is: " << factorial_function(num) << "\n";

		cout << "Press y to Continue: ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');
	return 0;
}
