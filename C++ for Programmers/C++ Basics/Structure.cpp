#include <iostream>

using namespace std;
// Student structure
struct Student {
	string name;
	int roll_number;
	int marks;
};
// main function
int main() {
	Student s1, s2, s3;
	// Assign value to members of s1
	s1.name = "John";
	s1.roll_number = 1;
	s1.marks = 50;
	cout << "s1 Information:" << endl;
	// Print members of s1  
	cout << "Name = " << s1.name << endl;
	cout << "Roll Number = " << s1.roll_number << endl;
	cout << "Marks = " << s1.marks << endl;
	// Assign value to members of s2
	s2.name = "Alice";
	s2.roll_number = 2;
	s2.marks = 43;
	// Print members of s2
	cout << "s2 Information:" << endl;
	cout << "Name = " << s2.name << endl;
	cout << "Roll Number = " << s2.roll_number << endl;
	cout << "Marks = " << s2.marks << endl;

	//other form of doing the set up

	s3 = { "Alice", 2, 43 };

	cout << "s3 Information:" << endl;
	cout << "Name = " << s3.name << endl;
	cout << "Roll Number = " << s3.roll_number << endl;
	cout << "Marks = " << s3.marks << endl;



	//array and structures
	struct Student s[100];

	s[0] = { "John", 1, 50 };

	cout << "s1 Information:" << endl;
	cout << "Name = " << s[0].name << endl;
	cout << "Roll Number = " << s[0].roll_number << endl;
	cout << "Marks = " << s[0].marks << endl;

	s[1] = { "Alice", 2, 43 };

	cout << "s2 Information:" << endl;
	cout << "Name = " << s[1].name << endl;
	cout << "Roll Number = " << s[1].roll_number << endl;
	cout << "Marks = " << s[1].marks << endl;

	return 0;
}