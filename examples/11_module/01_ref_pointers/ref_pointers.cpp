#include "ref_pointers.h"

//

void ref(int & number, int* numberPtr)
{
	number = 100;
	*numberPtr = 1000;
}
