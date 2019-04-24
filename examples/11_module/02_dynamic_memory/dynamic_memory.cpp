#include "dynamic_memory.h"
#include <iostream>
//

void allocate_use_release()
{
	int stack_num{ 5 }; //stack variable 
													//ALLOCATE
	int* num = new int(5);// heap, data variable --> keyword new makes it dynamic memory 

	std::cout << *num; //USE

	delete num; //RELEASE
	num = nullptr;
}
