#include <iostream>
#include <string>
using namespace std;

class Father {
	string eye_color;
	string hair_color;
public:
	Father() {
		eye_color = "";
		hair_color = "";
	}
	Father(string eye_c, string hair_c) {
		eye_color = eye_c;
		hair_color = hair_c;
	}
	void Father_traits() {
		cout << "Eye color: " << eye_color << endl << "Hair color: " << hair_color << endl;
	}
};

class Son : public Father {
	string Name;
public:
	Son(string nam,string eye, string hair) :Father (eye, hair) {
		Name = nam;
	}
	void Son_traits() {
		Father_traits();
		cout << Name << " has beard!\n";
	}
};
class Daughter : public Father {
	string Name;
public:
	Daughter(string nam, string eye, string hair) :Father(eye, hair) {
		Name = nam;

	}
	void Daughter_traits() {
		Father_traits();
		cout << Name << " has long hair!\n";
	}

};

int main() {
	Daughter obj("Rapunzel", "Green", "Golden");
	obj.Daughter_traits();

	Son Obj("Ralph", "Brown", "Black");
	Obj.Son_traits();
}