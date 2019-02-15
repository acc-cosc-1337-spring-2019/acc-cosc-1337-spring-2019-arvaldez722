#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Write a test case for get_max_from_vector with values:
vector values 3,8,1,99,1000 returns 1000
vector values 15,12,11,99,88 returns 99
vector values 150,120,11,990,88888 returns 88888
*/


/*
Write a test case for is_prime with values:
2 returns true
4 returns false
43 returns true
44 returns false
*/


/*
Write test case for vector_of_primes here with
argument 10 return vector should have the following items:
2 3 5 7
argument 50 return vector should have the following items:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
*/