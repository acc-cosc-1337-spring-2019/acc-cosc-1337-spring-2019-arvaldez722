#include <iostream>
int main()
{

	cost int SIZE = 5;

	int hours[SIZE] = { 5, 10,30,20,7 };

	for (auto hour : hours) {
		std::cout << hour << std::endl;
	}

	int i = 1;
	for (auto& hour : hours) { //reference loop access the location in the array 
		std::cout << hour << std::endl;
		hour = i++;
	}

	for (auto hour : hours) {
		std::cout << hour << std::endl;
	}
}