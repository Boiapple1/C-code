#include <iostream>

using namespace std;

void xchg(int& x, int& y) { // Reference parameters
	int t = x;
	x = y;
	y = t;
}

void passPointer(int* number) {
	// Multiply the number by 10
	*number = *number * 10;
	cout << "Value of number inside the function = " << *number << endl;
}

int main() {
	// Declares a variable Alice
	int Alice = 5;
	// Declares a pointer variable John that can point to int value
	int* John = nullptr;
	// Stores the address of Alice in John
	John = &Alice;
	// Prints value of Alice
	cout << "Value of Alice = " << Alice << endl;
	// Prints value (address of Alice) of John 
	cout << "Value of John = " << John << endl;
	// Prints value of Alice
	cout << "Value of Alice = " << *John << endl;

	int i = 20;
	int& iRef = i;
	std::cout << "i: " << i << std::endl;
	std::cout << "iRef: " << iRef << std::endl;

	std::cout << std::endl;

	iRef = 30; // Altering the reference

	std::cout << "i: " << i << std::endl;
	std::cout << "iRef: " << iRef << std::endl;


	int a = 10;
	int b = 20;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	xchg(a, b);
	std::cout << std::endl;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	// Initialize variable
	int num = 10;
	cout << "Value of number before function call = " << num << endl;
	// Call function
	passPointer(&num);
	cout << "Value of number after function call = " << num << endl;

}