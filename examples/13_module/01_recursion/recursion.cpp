#include "recursion.h"
#include <iostream>

//

void display(int n)
{ 
	if (n == 0) {
		std::cout << "Base Case" << std::endl;
		return;

	}
	std::cout << "Hewwo" << std::endl;
	display(n - 1);
}

int factorial(int n) {
	
	int f = 1;

	if (n == 0) {
		std::cout << "Base Case" << std::endl;
		return f;
	}
	std::cout << "Load Stack" << std::endl;

	f = n * factorial(n - 1);
	std::cout << "Unload Stack" << std::endl;
	return f;
}
