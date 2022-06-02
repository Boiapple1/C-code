#include <iostream>

using namespace std;

int main()
{
	int var = 5000;
	cout << "var = " << var << endl;
	var = 1000;
	cout << "var = " << var << endl;
	const int a = 1;
	int var1 = 10;
	int var2 = 20;
	int temp;
	// Print the values of var1 and var2
	cout << "Initial values of var1 and var2 are:" << endl;
	cout << "var1 = " << var1 << endl;
	cout << "var2 = " << var2 << endl;
	var1 = var1 + var2 + a;
	cout << "var1 = " << var1 << endl << "after adding var2 + 1" << endl;


}
