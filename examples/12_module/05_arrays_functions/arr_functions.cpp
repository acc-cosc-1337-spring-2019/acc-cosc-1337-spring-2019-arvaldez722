//
#include <iostream>
#include "arr_functions.h"

void interate_array(int* ints, int* SIZE) {
	
	for (int i = 0; i < SIZE; ++i;) {

		std::cout << *ints << std::endl;
		ints++;
	}
}