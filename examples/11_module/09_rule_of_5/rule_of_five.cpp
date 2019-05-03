#include "destructor.h"
#include "rule_of_five.h"
//
RuleOf5::~RuleOf5()
{
	delete ptr_num;
	ptr_num = nullptr;

}
RuleOf5::RuleOf5(const RuleOf5 & d)
{
	ptr_num = new int(*d.ptr_num);
}


RuleOf5& RuleOf5::operator=(RuleOf5& d)
{
	delete ptr_num;
	ptr_num = new int(*d.ptr_num);

	return *this;
}

RuleOf5::RuleOf5(RuleOf5 && r)
{
	//"&&" --> means it may be temporary object(rvalue)
	ptr_num = r.ptr_num;
	r.ptr_num = nullptr;

}

RuleOf5 & RuleOf5::operator=(RuleOf5 && r)
{
	std::swap(ptr_num, r.ptr_num);
	return *this;
}

void RuleOf5::set_value(int n)
{
	num = n;
}

int RuleOf5::get_value()
{
	return num;
}

void RuleOf5::set_ptr_num()
{
	ptr_num = num;

}

int * RuleOf5::get_ptr_num()
{
	return ptr_num;
}
