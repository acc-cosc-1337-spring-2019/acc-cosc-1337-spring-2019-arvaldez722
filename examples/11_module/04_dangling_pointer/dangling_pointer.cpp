#include "dangling_pointer.h"

//

void dangaling_pointer()
{
	int* ptr = new int(100);
	int* innocent_ptr = ptr;
	delete ptr;
	//other lines of code

	//use of innocent_prt in the future will cause problems

}
