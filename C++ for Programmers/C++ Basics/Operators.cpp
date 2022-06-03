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

}