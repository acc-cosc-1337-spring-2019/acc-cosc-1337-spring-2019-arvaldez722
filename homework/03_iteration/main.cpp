#include<iostream>
#include<string>
#include "dna.h"
#include "dna.cpp"
 
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
		cout << "For GC Content: 1 \n For DNA Complement: 2";
		cin >> menu_choice;
		count << "Enter DNA String: \n";
		cin >> dna;

		if (menu_choice == 1)
		{
			cout << "GC Content is " << get_gc_content(dna) << "\n";

		}
		else
		{
			cout << "DNA Complement is " << get_dna_complement << "\n";

		}

		cout << "Do you want to continue? Enter: y";
		cin >> c;


	} while(choice == 'y' || choice == "Y");

	return 0;
}
