#include<iostream>
#include "sample_do_while.h"
#include "switch.h"

using std::cout;
using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
	int choice;
	do 
	{
		cout << "Enter 1 to continue: ";
		cin >> choice;
	
	} while (choice == 1);
}


//Write code for function run_menu that prompts  user for a 
//number from 1 to 4 and displays the option user selected.
/*
Use the existing menu_option function from /example/01_module/07_switch
folder.

*/
void run_menu()
{
	int option;
	char choice;

	do 
	{
		cout << "Enter number from 1 to 4";
		cin >> option;
		cout << menu_option(option);

		cout << "Continue? y or n";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');
}

