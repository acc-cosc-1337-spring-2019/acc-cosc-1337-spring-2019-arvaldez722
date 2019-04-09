#include <vector>
#include <climits>

/*
Write a value return function prototype get_max_from_vector with a 
const reference vector of ints parameter that returns an int

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/

int get_max_from_vector(const std::vector<int> &vector_of_integers);

/*
Write a function prototype named is_prime with an integer parameter 
tha tgiven a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int);

/*
Write a a function prototype named vector_of_primes with an integer 
parameter that Given a number returns all the prime numbers up to 
the number

@param int integer value
@return vector of ints containing prime values up to a value
*/
std::vector<int> vector_of_primes(int given_num);