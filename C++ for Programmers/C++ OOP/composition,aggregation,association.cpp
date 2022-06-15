//In composition, the lifetime of the owned object depends on the
//lifetime of the owner.//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Engine {
    int capacity;

public:
    Engine() {
        capacity = 0;
    }

    Engine(int cap) {
        capacity = cap;
    }

    void Engine_details() {
        cout << "Engine details: " << capacity << endl;
    }
};

class Tyres {
    int No_of_tyres;

public:
    Tyres() {
        No_of_tyres = 0;
    }

    Tyres(int nt) {
        No_of_tyres = nt;
    }

    void Tyre_details() {
        cout << "Number of tyres: " << No_of_tyres << endl;
    }
};

class Doors {
    int No_of_doors;

public:
    Doors() {
        No_of_doors = 0;
    }

    Doors(int nod) {
        No_of_doors = nod;
    }

    void Door_details() {
        cout << "Number of Doors: " << No_of_doors << endl;
    }
};

class Car {
    Engine Eobj;
    Tyres Tobj;
    Doors Dobj;
    string color;

public:
    Car(Engine eng, Tyres tr, int dr, string col)
        : Eobj(eng), Tobj(tr), Dobj(dr) {

        color = col;
    }

    void Car_detail() {
        Eobj.Engine_details();
        Tobj.Tyre_details();
        Dobj.Door_details();
        cout << "Car color: " << color << endl;
    }
};

class Country {
    string name;
    int population;

public:
    Country(string n, int p) {
        name = n;
        population = p;
    }
    string getName() {
        return name;
    }
};

class Person {
    string name;
    Country* country; // A pointer to a Country object

public:
    Person(string n, Country* c) {
        name = n;
        country = c;
    }

    string printDetails() {
        cout << "Name: " << name << endl;
        cout << "Country: " << country->getName() << endl;
    }
};

class Teacher;  // Making this friend of a student class

class Student {
private:
    string Std_name;
    vector<Teacher*> tr;
    void addTeacher(Teacher* teach);

public:
    Student(string name) {
        Std_name = name;
    }

    string getName() const {
        return Std_name;
    }

    friend ostream& operator<<(ostream& out, const Student& std);

    // Making teacher friend of this class to access addTeacher function
    friend class Teacher;
};

class Teacher {
private:
    string tr_name;
    vector<Student*> stdnt;

public:
    Teacher(string name) {
        tr_name = name;
    }

    void addStudent(Student* st) {
        // Teacher will add this student to course
        stdnt.push_back(st);

        // Student will also add this teacher for connection
        st->addTeacher(this);
    }

    friend ostream& operator<<(ostream& out, const Teacher& tchr) {
        int length = tchr.stdnt.size();
        if (length == 0) {
            out << tchr.tr_name << " is not teaching any class";
            return out;
        }

        out << tchr.tr_name << " is teaching: ";
        for (int count = 0; count < length; ++count)
            out << tchr.stdnt[count]->getName() << ' ';

        return out;
    }

    string getName() const {
        return tr_name;
    }
};

void Student::addTeacher(Teacher* teach) {
    tr.push_back(teach);
}

ostream& operator<<(ostream& out, const Student& std) {
    int length = std.tr.size();
    if (length == 0) {
        out << std.getName() << " is not registered in any course";
        return out;
    }

    out << std.Std_name << " is taught by: ";
    for (int count = 0; count < length; ++count)
        out << std.tr[count]->getName() << ' ';

    return out;
}



int main() {
    Engine Eobj(1600);
    Tyres Tobj(4);
    Doors Dobj(4);
    Car Cobj(Eobj, Tobj, 4, "Black");
    Cobj.Car_detail();

    //In aggregation, the lifetime of the 
    //owned object does not depend on the lifetime of the owner.

    Country* country = new Country("Utopia", 1);
    {
        Person user("Darth Vader", country);
        user.printDetails();
    }
    // The user object's lifetime is over

    cout << country->getName() << endl; // The country object still exists!
    
                                        
   // Creating a Students outside the scope of the Teacher
    Student* s1 = new Student("John");
    Student* s2 = new Student("Stacy");
    Student* s3 = new Student("Sarah");

    Teacher* t1 = new Teacher("Henry");
    Teacher* t2 = new Teacher("Neil");
    Teacher* t3 = new Teacher("Steve");

    t1->addStudent(s1);
    t2->addStudent(s1);
    t1->addStudent(s3);

    cout << *t1 << endl;
    cout << *t2 << endl;
    cout << *t3 << endl;
    cout << *s1 << endl;
    cout << *s2 << endl;
    cout << *s3 << endl;

}