#include "memory_leak.h"

int main() 
{
	memory_leak(); //leaks a bit of memeory

	while (true) {
		memory_leak(); //leaks lots of memoery 
	}
	return 0;
}