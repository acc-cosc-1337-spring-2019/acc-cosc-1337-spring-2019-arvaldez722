#include "destructor.h"


Destructor create_class();

int main() 
{
	Destructor d(10);
	Destructor c(5);

	
	Destructor a = d; // create a class copy

	Destructor b(d); //execture co[y constructor

	c = d; //executes copy assignment

	d.set_value(5);

	a.set_ptr_num(100);
	return 0;
}

Destructor create_class()
{
	return Destructor (5);

}
