#include <iostream>

using namespace std;

int main() {
	// Create variable of different types
	int integer_number = 10;
	float float_number = 10.5;
	/* Stores scientific value. The number after "e"
	represents the power of 10*/
	float float_scientific = 97e4;
	double double_number = 10.5;


	// Prints value of variables
	cout << "int = " << integer_number << endl;
	cout << "float = " << float_number << endl;
	cout << "float_scientific = " << float_scientific << endl;
	cout << "double = " << double_number << endl;
	
	char character = 'A';
	bool boolean = true;

	// Prints value of variables
	cout << "char = " << character << endl;
	cout << "bool = " << boolean << endl;

	//long is used to increase the length of a data type to 4 more bytes
	// Initialize variables
	int integer = 2147483649;
	long int long_integer = 2147483649;
	// Display variables value
	cout << "integer = " << integer << endl;
	cout << "long_integer = " << long_integer << endl;

	//short decreases the available length of a data type to 2 bytes.

	// Initialize variables
	int integer = 32768;
	short int short_integer = 32768;
	// Display variables value
	cout << "integer = " << integer << endl;
	cout << "short_integer = " << short_integer << endl;

	//unsigned allows us to store positive values only.
	int integer = -10;
	unsigned int unsigned_integer = -10;

	char character = 'A';
	unsigned char unsigned_character = 'B';
	// Display variables value
	cout << "integer = " << integer << endl;
	cout << "unsigned_integer = " << unsigned_integer << endl;

	cout << "character = " << character << endl;
	cout << "unsigned_character = " << unsigned_character << endl;

	//signed allows us to store both positive and negative values.
	  // Initialize variables
	int integer = -90;
	signed int signed_integer = -90;

	char character = 'A';
	signed char signed_character = 'A';
	// Display variables value
	cout << "integer = " << integer << endl;
	cout << "signed_integer = " << signed_integer << endl;

	cout << "character = " << character << endl;
	cout << "signed_character = " << signed_character << endl;
	

	//  // Initializes a variable of char data type
	char character = 'A';
	// Declares a variable of int type
	int ASCII;
	// Converts char data type into int explicitly
	ASCII = (int)character;
	// Prints value of variable
	cout << "ASCII value = " << ASCII;

	//string
	// Initialize string variable with text and escape characters
	string text = "Hello\nI\tam\tJohn";
	// Displays value of string variable
	cout << text;

	//cin input
	  // Declares variable
	float number;
	// Displays text
	cout << "Please enter your number:" << endl;
	// Waits for the user input
	cin >> number;
	// Displays entered number
	cout << "You have entered: " << number;


}