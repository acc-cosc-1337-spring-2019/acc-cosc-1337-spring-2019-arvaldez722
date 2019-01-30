//Write the include statement for assign02 here
#include"assign02.h" 
//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>

using std::cout;
using std::cin;
int main() 

{
	//create a double variable named hours
	//create a double variable named hourly_rate
	double hours;
	double hourly_rate;

	//Prompt user for keyboard input for hours and hourly_rate
	//save the input to variables hours and hourly_rate

	cout<<"(Enter Hours: )";
	cin >> hours;
	cout << ("Enter Hourly Rate: ");
	cin >> hourly_rate;

	//Create a double variable named gross_salary
	//Call the gross_pay function and save its return value to the gross_salary variable

	double gross_salary;
	gross_salary = grosspay(hours, hourly_rate);

	//Display the gross_salary variable as follows:
	//Example ---->>>     Gross pay: 150.00   

	cout << "Gross pay is: " << gross_salary;

	return 0;
}

