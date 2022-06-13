//Now, we want the data members, and member functions of the class 
//are accessible from other classes
//the capability of a class to derive properties and characteristics
//from another class is called Inheritance.
//
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string Make;
    string Color;
    int Year;
    string Model;

public:
    Vehicle() {
        Make = "";
        Color = "";
        Year = 0;
        Model = "";
    }

    Vehicle(string mk, string col, int yr, string mdl) {
        Make = mk;
        Color = col;
        Year = yr;
        Model = mdl;
    }

    void print_details() {
        cout << "Manufacturer: " << Make << endl;
        cout << "Color: " << Color << endl;
        cout << "Year: " << Year << endl;
        cout << "Model: " << Model << endl;
    }
};

class Cars : public Vehicle {
    string trunk_size;

public:
    Cars() {
        trunk_size = "";
    }

    Cars(string mk, string col, int yr, string mdl, string ts)
        :Vehicle(mk, col, yr, mdl) {
        trunk_size = ts;
    }

    void car_details() {
        print_details();
        cout << "Trunk size: " << trunk_size << endl;
    }
};

class Ships : public Vehicle {
    int Number_of_Anchors;

public:
    Ships() {
        Number_of_Anchors = 0;
    }

    Ships(string mk, string col, int yr, string mdl, int na)
        :Vehicle(mk, col, yr, mdl) {
        Number_of_Anchors = na;
    }

    void Ship_details() {
        print_details();
        cout << "Number of Anchors: " << Number_of_Anchors << endl;
    }
};

// Base class 
class Base {

public:
    Base() {
        cout << "Base class default constructor!" << endl;
    }
    // Base class's parameterised constructor     
    Base(float i) {
        cout << "Base class parameterized constructor" << endl;
    }
};


// Derived class 
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class default constructor!" << endl;
    }

    // Derived class's parameterised constructor 
    Derived(float num) : Base(num) {
        cout << "Derived class parameterized constructor" << endl;
    }
};
/*
Base class destructor
// Base class 
class Base {    
    
    public:  
    ~Base(){
      cout << endl << "Base class Destructor!" ;
    }
}; 
  
  
// Derived class 
class Derived : public Base { 
    public:  
    
    ~Derived(){
      cout << endl << "Derived class Destructor!" ;
    }
}; 
*/

int main() {
    // creating object of Derived Class 
    Derived obj;
    cout << endl;
    Derived obj1(10.2);


    Cars car("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
    car.car_details();

    cout << endl;

    Ships ship("Harland and Wolff, Belfast", "Black and whilte",
        1912, "RMS Titanic", 3);
    ship.Ship_details();
}