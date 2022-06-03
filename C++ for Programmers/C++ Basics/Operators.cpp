#include <iostream>
using namespace std;

int main() {

	//Arithmetic operators are used to perform numeric operations on operands.
	//int values
	
	// Initilaize operand1 and operand2
	int operand1 = 50;
	int operand2 = 26;
	// Prints value of operand1 and operand2
	cout << "Values of operands are:" << endl;
	cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
	// Adds operand1 and operand2; and print their result
	cout << "Addition = " << operand1 + operand2 << endl;
	// Subtracts operand1 and operand2; and print their result
	cout << "Subtraction = " << operand1 - operand2 << endl;
	// Multiplies operand1 and operand2; and print their result
	cout << "Multiplication = " << operand1 * operand2 << endl;
	// Divides operand1 and operand2; and print their result
	cout << "Division = " << operand1 / operand2 << endl;
	// Returns remainder of operand1 and operand2; and print it
	cout << "Modulus = " << operand1 % operand2 << endl;
	
	//float values
	 // Initilaize operand1 and operand2
	float operand1 = 50.0;
	float operand2 = 26.0;
	// Prints value of operand1 and operand2
	cout << "Values of operands are:" << endl;
	cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
	// Adds operand1 and operand2; and print their result
	cout << "Addition = " << operand1 + operand2 << endl;
	// Subtracts operand1 and operand2; and print their result
	cout << "Subtraction = " << operand1 - operand2 << endl;
	// Multiplies operand1 and operand2; and print their result
	cout << "Multiplication = " << operand1 * operand2 << endl;
	// Divides operand1 and operand2; and print their result
	cout << "Division = " << operand1 / operand2 << endl;
	// Returns remainder of operand1 and operand2; and print it
	//cout << "Modulus = " << operand1 % operand2 << endl;
	
	//The compound assignment operator is used to perform an operation and then 
	//assign the result to the operand on the left-hand side.
	
	int operand1 = 50;
	int operand2 = 26;
	cout << "Before using compound assignment operator:" << endl;
	cout << "operand1 = " << operand1 << endl;
	operand1 += operand2;
	cout << "After using compound assignment operator:" << endl;
	cout << "operand1 += operand2 = " << operand1 << endl;

	//A relational operator compares the value of two operands.

	int operand1 = 50;
	int operand2 = 26;
	cout << " operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
	cout << " Is operand1 less than operand2? " << (operand1 < operand2) << endl;
	cout << " Is operand1 less than or equal to operand2? " << (operand1 <= operand2) << endl;
	cout << " Is operand1 greater than operand2? " << (operand1 > operand2) << endl;
	cout << " Is operand1 greater than or equal to operand2? " << (operand1 >= operand2) << endl;
	cout << " Is operand1 equal to operand2? " << (operand1 == operand2) << endl;
	cout << " Is operand1 not equal to operand2? " << (operand1 != operand2) << endl;

	/*Logical operators are either used to combine two or more boolean operands or to negate the 
	result of the original boolean operand.*/

	bool operand1 = 2 > 3;
	bool operand2 = true;
	cout << "Values of operands are:";

	cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
	cout << "operand1 && operand2 = " << (operand1 && operand2) << endl;
	cout << "operand1 || operand2 = " << (operand1 || operand2) << endl;
	cout << "!operand1 = " << (!operand1) << endl;
	cout << "!operand2 = " << (!operand2) << endl;

	//A bitwise operator performs bit by bit processing on the operands.

	int operand1 = 3;
	int operand2 = 2;
	cout << "operand1 = " << operand1 << " , operand2 = " << operand2 << endl;
	cout << "operand1 & operand2 = " << (operand1 & operand2) << endl;
	cout << "operand1 | operand2 = " << (operand1 | operand2) << endl;
	cout << "operand1 ^ operand2 = " << (operand1 ^ operand2) << endl;

	int operand1 = 2;
	int operand2 = 1;

	cout << "operand1 >> operand2 = " << (operand1 >> operand2) << endl;
	cout << "operand1 << operand2 = " << (operand1 << operand2) << endl;
	
	//Precedence and Associativity
	// precedence determines the order in which the operators should be evaluated.

	cout << 4 - (8 + 10) * 3;

	//Associativity determines the order in which the operators 
	// with the same precedence should be evaluated.
	//
	cout << 4 - 8 + 10 + 3;

	//challenge
	// Initialize a variable total_seconds
	int total_seconds = 3870;
	// Prints value of total_seconds
	cout << "total_seconds = " << total_seconds << endl;
	// Declares variable
	int hours, minutes, seconds;
	// Convert seconds in hours and store the output in hours variable
	hours = total_seconds / 3600;
	cout << "Time in hours, minutes and seconds = ";
	// Prints value of hours
	cout << hours << "h :";
	// Store the remaining seconds in total_seconds
	total_seconds = total_seconds % 3600;
	// Convert seconds in minutes and store the output in minutes variable
	minutes = total_seconds / 60;
	// Prints value of minutes
	cout << minutes << "m :";
	// Store the remaining seconds in seconds variable
	seconds = total_seconds % 60;
	cout << seconds << "s";


}