#include <iostream>

using namespace std;
// Student structure
struct Student {
	string name;
	int roll_number;
	int marks;
};

// function fillStudent
Student fillStudent(string name, int roll_number, int marks) {
	Student s;
	s.name = name;
	s.roll_number = roll_number;
	s.marks = marks;
	return s;
}

//creating a function for printing the struct info

void printStudent(Student s) {
	cout << "Student information" << endl;
	cout << "Name = " << s.name << endl;
	cout << "Roll Number = " << s.roll_number << endl;
	cout << "Marks = " << s.marks << endl;
}


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

	printStudent(s[0]);
	printStudent(s[1]);

	//return a structure from a function

	s[0] = fillStudent("John", 1, 50);
	printStudent(s[0]);

	s[1] = fillStudent("Alice", 2, 43);
	printStudent(s[1]);


	//structure pointers
	 // Declare structure variable
	struct Student s1;
	// Declare structure pointer
	struct Student* ptrs1;
	// Store address of structure variable in structure pointer
	ptrs1 = &s1;

	// Set value of name
	(*ptrs1).name = "John";
	// Set value of roll_number
	(*ptrs1).roll_number = 1;
	// Set value of marks
	(*ptrs1).marks = 50;

	//you can also use the arrow
	// Set value of name
	ptrs1->name = "John";
	// Set value of roll_number
	ptrs1->roll_number = 1;
	// Set value of marks
	ptrs1->marks = 50;

	// Print value of structure member
	cout << "s1 Information:" << endl;
	cout << "Name = " << (*ptrs1).name << endl;
	cout << "Roll Number = " << (*ptrs1).roll_number << endl;
	cout << "Marks = " << (*ptrs1).marks << endl;


	return 0;
}