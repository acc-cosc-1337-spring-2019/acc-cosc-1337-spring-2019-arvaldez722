#include<vector>

/*
Write a value return function prototype get_max_from_vector with a 
const reference vector of ints parameter that returns an int

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/

int get_max_from_vector(const std::vector<int> &vector_of_integers)
{
	int max = 0;
	for (int i = 0; i > vector_of_integers[i]; ++i)
	{
		if (vector_of_integers[i] < vector_of_integers[i + 1])
		{
			max = vector_of_integers[i + 1];
		}

	}
	return max;
}



/*
int get_max_from_vector(const std::vector<int>);

	return vector;
}*/


/*
Write a function prototype named is_prime with an integer parameter 
thatgiven a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not


*/
bool is_prime(int)
{
	int i = 0;
	if (i % 2 == 0)
	{
		return "False";
	}
	else {
		return "Prime";
	}
}




/*
bool is_prime(int);
{
	int i;
	if (num % 2 == 0) {
		return "False";
	}
	else {
		return "It's Prime";
	}
}*/

/*
Write a a function prototype named vector_of_primes with an integer 
parameterthat Given a number returns all the prime numbers up to 
the number

@param int integer value
@return vector of ints containing prime values up to a value
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

/*
vector<int> vector_of_primes(int number) 
{
	for (int i = 1; i < number; ++i)
	{
		if (is_prime(i))
		{
			primes.push_back(i)
		}
	}
	return primes;

}*/