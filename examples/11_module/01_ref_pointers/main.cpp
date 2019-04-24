#include "ref_pointers.h"
#include <iostream>
int main() 
{
	int number = 10;

	//a pointer can store the address of a variable
	int* numberPtr = &number;

	ref(number, numberPtr);

	//display what value??? should see 100;

	std::cout << number << std::endl;

	//get an address hexadecimal
	std::cout << "Address: " << &number << " value is: " << number << std::endl;


	std::cout << "Address of numberPtr: " << &numberPtr;
	std::cout << " value stored at address is: " << numberPtr << std::endl;
	std::cout << "Dereference numberPtr: " << *numberPtr << std::endl;
	return 0;
}