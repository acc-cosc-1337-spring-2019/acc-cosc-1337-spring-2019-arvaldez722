#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string& dna)
{
	double count = 0;

	for (auto d : dna)
	{
		if (d == 'G' || d == 'g' || d == 'c' || d == 'C')
		{
			count++;
		}
	}
	return count / dna.length();
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string str)
{
	std::string reverse;

	for (std::size_t i = str.size() - 1; i != -1; --i)
	{
		reverse.push_back(str[i]);
	}
	return reverse;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

std::string get_dna_complement(std::string dna)
{
	for (std::size_t i = 0; i < dna.size(); ++i)
	{
		switch (dna[i])
		{
		case 'A':
		case 'a':
			dna[i] = 'T';
			break;
		case 'T':
		case 't':
			dna[i] = 'A';
			break;
		case 'C':
		case 'c':
			dna[i] = 'G';
			break;
		case 'G':
		case 'g':
			dna[i] = 'C';
			break;
		default:
			break;
		}

	}

	return get_reverse_string(dna);
}

