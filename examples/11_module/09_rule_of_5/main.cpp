#include "rule_of_five.h"

RuleOf5 get_object();

int main() 
{
	RuleOf5 r(10);
	r = get_object();

	RuleOf5 a = get_object();

	RuleOf5 b(6);
	a = b;
	RuleOf5 c(a);

	return 0;
}

RuleOf5 get_object()
{
	RuleOf5 r(10);
	return r; //this is a temporary object that is gone once the function executes 

}
