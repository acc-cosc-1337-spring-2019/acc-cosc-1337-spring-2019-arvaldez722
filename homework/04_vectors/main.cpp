#include <iostream>
#include <string>
#include "vectors.h"
/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	char c;
	int choice;

	do {
		std::cout << "Select:\n1.)Get Max\n2.)Get Primes" << std::endl;
		std::cin >> choice;

		//Prompt user for a vector of integers and find the max
		if (choice == 1) {
			std::string user_string;
			std::vector<int> vector_max;
			int user_int;
			bool finished = false;

			//build the vector
			while(!finished) {
				size_t pos_of_non_num = 0;
				//prompt to for a number
				std::cout << "Enter a number to put in the vector or q if you're done: ";
				std::cin >> user_string;

				if (user_string == "q" || user_string == "Q") {
					finished = true;
				}
				else {
					for (int i = 0; i < user_string.length(); ++i) {
						if (0 == isdigit(user_string[i])) {
							finished = true;
						}
					}

					if(!finished) {
						user_int = stoi(user_string, &pos_of_non_num, 10);

						//add it to the array
						vector_max.push_back(user_int);
					}
				}
			}

			//get the max and print it out

			std::cout << "Max value: " << get_max_from_vector(vector_max) << std::endl;
		}

		//Prompt user for a single integer and show all primes up to that number
		if (choice == 2) {
			int user_prime;
			std::cout << "Primes up to what number? Enter: ";
			std::cin >> user_prime;
		
			//Should check here to make sure that user_prime is positive
			if (user_prime > 0) {
				std::vector<int> prime_vect = vector_of_primes(user_prime);

				std::cout << "Prime vector: ";
				for (int i = 0; i < prime_vect.size() - 1; ++i) {
					std::cout << prime_vect[i] << ", ";
				}
				std::cout << prime_vect[prime_vect.size()-1] << std::endl;
			}

		}

		std::cout << "Do you want to continue? (y/n) " << std::endl;
		std::cin >> c;

	} while (c == 'y' || c == 'Y');

	return 0;
}