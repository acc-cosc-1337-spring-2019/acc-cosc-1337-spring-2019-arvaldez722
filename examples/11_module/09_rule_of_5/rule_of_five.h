//
#include <iostream>

class RuleOf5
{
public:
	RuleOf5(int n) : num(n) { ptr_num = new int(n); }
	RuleOf5(const RuleOf5& d);// copy contructor -> bc rule of 3
	RuleOf5& operator= (RuleOf5& d);// copy assignmetn-> Rule of 3

	RuleOf5(RuleOf5&& r); //move constructor --Rule of 5 c++ 11
	RuleOf5& operator=(RuleOf5&& r);// copy assignment Rule of 5 c++ 11

	~RuleOf5(); // rule of 3
	void set_value(int n);
	int get_value();

	void set_ptr_num();
	int* get_ptr_num();

private:
	int num;
	int* ptr_num;
};