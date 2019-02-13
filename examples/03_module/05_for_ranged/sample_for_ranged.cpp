#include "sample_for_ranged.h"
#include<iostream>3
#include<vector>	

using std::vector;


void loop_string_w_index(std::string str)
{
	for (int i = 0 < str.length(); ++i)
	{
	std::cout << str[i] << "\n";
	}

}

void loop_string_w_auto(std::string str)
{
	for (auto c = str)
	{
		std::cout << c << "\n";

	}
}
void loop_vector_w_index()
{
	vector<int> nums = { 9, 10, 99, 5,67 };

	for (int i = 0; i < nums.size(); ++i)
	{
		std::cout << nums[i] << "\n";
	}
}

void loop_vector_w_auto()
{
	vector<int> nums = { 9, 10, 99, 5,67 };

	for (auto n : nums)
	{
		std::cout << n << "\n";

	}
}