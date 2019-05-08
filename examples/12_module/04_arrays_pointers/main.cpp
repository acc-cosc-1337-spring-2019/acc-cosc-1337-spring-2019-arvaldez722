#include <iostream>
int main() 
{
	cost int SIZE = 5;

	int hours[SIZE] = { 5, 10,30,20,7 };

	int* first_element = hours;

	std::cout << *first_element << std::endl;
	std::cout << *(first_element +1) << std::endl;
	std::cout << *first_element << std::endl;

	*first_element++;
	std::cout << *first_element << std::endl;


	//forward iteration
	int* hours_ptr = hours;
	for (int i = 0; i < SIZE; ++i;) {
		std::cout << *hours_ptr << std::endl;
		hours_ptr++;
	}

	//reverse iteration
	for (int i = 0; i < SIZE; ++i;) {
		hours_ptr--;
		std::cout << *hours_ptr << std::endl;

	}
	return 0;
}