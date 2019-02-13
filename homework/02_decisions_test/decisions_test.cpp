#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Write a Test case for function get_grade_points with following values:
given grade "A" returns 4
given grade "B" returns 3
given grade "C" returns 2
given grade "D" returns 1
given grade "F" returns 0
given grade "Y" returns -1
*/

TEST_CASE("Get grade points")
{
	REQUIRE(get_grade_points("A") == 4);
	REQUIRE(get_grade_points("B") == 3);
	REQUIRE(get_grade_points("C") == 2);
	REQUIRE(get_grade_points("D") == 1);
	REQUIRE(get_grade_points("F") == 0);
	REQUIRE(get_grade_points("J") == -1);

}


/*
Write a Test case for function calculate_gpa with following values:
credit_hours	credit_points		gpa
12				45					3.75
120				390					3.25
90				180					2.00
*/

TEST_CASE("GPA calculation test")
{
	REQUIRE(calculate_gpa(12, 45) == 3.75);
	REQUIRE(calculate_gpa(120, 390) == 3.25);
	REQUIRE(calculate_gpa(90, 180) == 2.00);
}