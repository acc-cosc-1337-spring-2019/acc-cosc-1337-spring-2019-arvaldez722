#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "sample_while.h"

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