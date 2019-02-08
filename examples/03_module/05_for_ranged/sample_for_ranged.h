#include<string>
/*
Write a void function prototype for function count_letters_in_string
that accepts a string named str and a char named letter.  
The function returns the count of a letter in the str.

count_letters_in_string("larry", 'r');
returns 2
*/

//c++ 98 style
void loop_string_w_index(std::string str);
{
	for (int i = 0; i < str.length(); ++i)
	{
		std::cout << str[i] << "\n";

	}
}

//c++ 11 style 
void loop_string_w_auto(std::string str);
{
	for (auto c : str)
	{
		std::cout << c << "\n";

	}
}