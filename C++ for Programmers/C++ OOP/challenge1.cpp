#include <iostream>

using namespace std;

class Rectangle {
	
public:
	//data members
	float length;
	float heigth;

	//a constructor
	Rectangle(float l, float h) {
		length = l;
		heigth = h;

	}
	
	//member function
	float perimeter() {
		return length * 2 + heigth * 2;

	}

	float area() {
		return length * heigth;
	}
	void printpa() {
		cout << "perimeter: " << perimeter << " area: " << area << endl;
	}
};

int main() {

	Rectangle b(5,3);
	b.printpa();



}