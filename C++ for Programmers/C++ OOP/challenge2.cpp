#include <iostream>

using namespace std;

class Student {
private:
    // Define private variables here
    string name;
    float mark1;
    float mark2;

public:
    //two constructors
    Student() {

        name = "";
        mark1 = 0;
        mark2 = 0;
    }
    Student(string na, float ma1, float ma2) {
        name = na;
        mark1 = ma1;
        mark2 = ma2;
    }
    //member functions
    int GetMarks(int marknumber) {

        if (marknumber == 1) {
            return mark1;
        }
        else {
            return mark2;
        }
    }
    float calc_total() {

        return (mark1 + mark2);
    }
};

int main() {
    Student b("Jack", 80, 90);


}