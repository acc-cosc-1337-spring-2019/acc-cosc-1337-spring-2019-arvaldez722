#include<iostream>
#include<string>
#include "dna.h"
 
using std::cout; using std::cin;
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int menu_choice;
	char c;
	std::string dna;
	
	do
	{
		cout << "1.)GC Content\n2.)For DNA Complement\nEnter choice: ";
		cin >> menu_choice;
		cout << "Enter DNA String: \n";
		cin >> dna;

		//Add code to make dna string all upper case?

		if (menu_choice == 1)
		{
			cout << "GC Content is " << get_gc_content(dna) << "\n";

		}
		else
		{
			cout << "DNA Complement is " << get_dna_complement(dna) << "\n";

		}

		cout << "Do you want to continue? (y/n) ";
		cin >> c;


	} while(c == 'y' || c == 'Y');

	return 0;
}
