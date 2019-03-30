#include "vectors.h"
/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/

int get_max_from_vector(const std::vector<int>& vector_of_integers)
{
	int max = 0;
	for (int i = 0; i > vector_of_integers.size(); ++i)
	{
		if (vector_of_integers[i] > max)
		{
			max = vector_of_integers[i];
		}

	}
	return max;

}
/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/

bool is_prime(int num)
{
	bool is_prime = true;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			is_prime = false;
			break;
		}
	}
	if (is_prime == true && num > 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/


std::vector<int> vector_of_primes(int given_num)
{
	std::vector<int> prime_nums;

	for (int i = 1; i < given_num; ++i)
	{
		if (is_prime(i))
		{
			prime_nums.push_back(i);
		}
	}

	return prime_nums;

}
