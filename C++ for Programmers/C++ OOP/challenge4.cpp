#include <iostream>
using namespace std;

class Animal {
	string Name;
	string Sound;
public:
	Animal() {
		Name = "";
		Sound = "";

	}
	Animal(string Nam, string Soun) {
		Name = Nam;
		Sound = Soun;


	}
	void Animal_details() {
		cout << "Animal Name: " << Name << endl << "Sound: " << Sound << endl;

	}
};

class Dog : public Animal {
	string Family;
public:
	Dog(string N, string S) :Animal(N, S) {
		Family = "Carnivores";
	}
	void Dog_detail() {
		Animal_details();
		cout << "Dog's Family: " << Family << endl;

	}

};
class Sheep : public Animal {
	string Color;
public:
	Sheep(string N, string S) :Animal(N, S) {
		Color = "White";
	}
	void Sheep_detail() {
		Animal_details();
		cout << "Sheep's Color: " << Color << endl;
	}
};
int main() {
	Dog d("Pongo", "Woof Woof");
	d.Dog_detail();
	Sheep s("Billy", "Baa Baa");
	s.Sheep_detail();
}