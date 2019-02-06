#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "output.h"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

//Create a test case for the if statement using:
//the number 4 result should be true
//the number 55 result should be false
TEST_CASE("Is it even") {
	REQUIRE(is_even(4) == true);
	REQUIRE(is_even(55) == false);
}

TEST_CASE("Overtime Funct")
{
	REQUIRE(overtime(41) == true);
	REQUIRE(overtime(35) == false);
}

//Create a test case for the if else statement using:
//the year 1930 result should be 'Silent Generation'

//the year 1946 result should be 'Baby boomer'
//the year 1970 result should be 'Generation X'
//the year 1995 result should be 'Millenial'
//the year 1996 result should be 'Centennial'
//the year 1900 result should be 'Invalid Year'
//the year 2019 result should be 'Invalid Year'
TEST_CASE("Generation Funct")
{
	REQUIRE(get_generation(1930) == "Silent Generation");
	REQUIRE(get_generation(1946) == "Baby Boomer");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1995) == "Millenial");
	REQUIRE(get_generation(1996) == "Centenial");
	REQUIRE(get_generation(1900) == "Wrong year, dummy!");
	REQUIRE(get_generation(2019) == "Wrong year, dummy!");
}

//Create a test case for the switch statement using:
//value 1 result should be 'Option 1'
//value 2 result should be 'Option 2'
//value 3 result should be 'Option 3'
//value 4 result should be 'Option 4'
//value 5 result should be 'Invalid Option'

TEST_CASE("Menu function")
{
	REQUIRE(menu_option(1) == "Option 1");
	REQUIRE(menu_option(2) == "Option 2");
	REQUIRE(menu_option(3) == "Option 3");
	REQUIRE(menu_option(4) == "Option 4");
}