#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "sample_while.h"
#include "sample_value_ref.h"
#include "sample_for_ranged.h"

TEST_CASE("Test function sum_of_squares with preincrement ++i") 
{
	REQUIRE(sum_of_squares(4) == 30);
}


/*
Create test case for count_letters_in_string with values:
string     char          result
"james"     e              1
"larry"     r              2
"sammy m"   m              3 
*/

/*
Create test case to validate pass by value and reference
*/
TEST_CASE("Test pass by value and reference") 
{
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	pass_by_val_and_ref(num1, num2, num3);
	REQUIRE(num1 == 1);
	REQUIRE(num2 == 50);

}

TEST_CASE("Test pass vector by value") 
{
	
	std::vector<int> num = { 44, 55, 77, 11, 99 };
	std::vector<int> nums = { 44, 55, 77, 11, 99 };
	loop_vector_w_index(nums);
	
	for (int i = 0; i < num.size(); ++i) 
	{
		REQUIRE(num[i] == nums[i]);
	}


}

TEST_CASE("Test pass vector by reference")
{
	//TODO how to pass same function name argument by reference?
	std::vector<int> num = { 1000, 55, 77, 11, 99 };
	std::vector<int> nums = { 44, 55, 77, 11, 99 };
	loop_vector(nums);

	for (int i = 0; i < num.size(); ++i)
	{
		REQUIRE(num[i] == nums[i]);
	}


}