//Now, we want the data members, and member functions of the class 
//are accessible from other classes
//the capability of a class to derive properties and characteristics
//from another class is called Inheritance.
//
#include <iostream>
#include <string>
using namespace std;

class Car {
    string trunk_size;

public:
    Car() {
        trunk_size = "";
    }

    Car(string ts) {
        trunk_size = ts;
    }

    void car_details() {
        cout << "Trunk size: " << trunk_size << endl;
    }
};

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

//Overriding inherited functions
//

class Employee1 {
protected:
    string name;
    int ID;
    int reportsTo;
public:
    Employee1(string name, int ID, int boss) : name(name), ID(ID), reportsTo(boss) { }
    string getName() { return name; }
    int getID() { return ID; }
    int getBoss() { return reportsTo; }
    void display1() {
        cout << ID << " " << name << " reports to " << reportsTo << endl;
    }

    void display1(string salutation)
    {
        cout << salutation << " ";
        display1();
    }
};

class Manager1 : public Employee1 {
protected:
    string teamName;
public:
    Manager1(string name, int ID, int boss, string teamName) : Employee1(name, ID, boss), teamName(teamName) { }
    void display1() {
        Employee1::display1();
        cout << "   Heads the team " << teamName << endl;
    }
};

//private mode of inheritance
//private inheritance, the private data members and member
//functions of the base class are inaccessible in the 
// derived class and in main
//
class Car1 : private Vehicle {
    string trunk_size;

public:
    Car1() {
        trunk_size = "";
    }

    Car1(string mk, string col, int yr, string mdl, string ts)
        :Vehicle(mk, col, yr, mdl) {
        trunk_size = ts;
    }

    void car1_details() {
        print_details();
        cout << "Trunk size: " << trunk_size << endl;
        cout << "Model: " << Model << endl;  // Model is protected and 
        // is accessible in derived class
    }
};

//protected inheritance, the private members of the base 
//class are inaccessible in the derived class and in main. 
//
//
class Car3 : protected Vehicle {
    string trunk_size;

public:
    Car3() {
        trunk_size = "";
    }

    Car3(string mk, string col, int yr, string mdl, string ts)
        :Vehicle(mk, col, yr, mdl) {
        trunk_size = ts;
    }

    void car3_details() {
        print_details();
        cout << "Trunk size: " << trunk_size << endl;
        cout << "Model: " << Model << endl;  // Model is protected and 
        // is accessible in derived class
    }
};

//multiple inheritance
//

class Honda : public Vehicle, public Car {
    int top_speed;

public:
    Honda() {
        top_speed = 0;
    }

    Honda(string mk, string col, int yr, string mdl, string na, int ts)
        :Vehicle(mk, col, yr, mdl), Car(na) {
        top_speed = ts;
    }

    void Honda_details() {
        print_details();
        car_details();
        cout << "Top speed of the car: " << top_speed << endl;
    }
};

//
//multi level inheritance
class A {
public:
    void init() {
        cout << "Class A initialized!" << endl;
    }
    void update() {
        cout << "Class A updated!" << endl;
    }
};

class B : public A {
public:
    void update() {
        cout << "Class B updated!" << endl;
    }
};

class C : public B { };

//
// The diamond problem occurs when
//a derived class inherits the same member from multiple parent classes
// one solution is to used virtual inheritance

class A1
{
protected:
    int ID;
public:
    A1() : ID(0) { }
};

class B1 : virtual public A1
{
public:
    int length;
};


class C1 : virtual public A1
{
public:
    int radius;
};

class D1 : public B1, public C1
{
public:
    int getID() { return ID; }
    //or change return ID with
    //return B::ID or return C::ID
};

//
//Override final
//
class Sort {
public:
    virtual void processData() {
        readData();
        sortData();
        writeData();
    }
private:
    virtual void readData() {}
    virtual void sortData() = 0;
    virtual void writeData() {}
};


class QuickSort : public Sort {
private:
    void readData() {
        std::cout << "readData" << std::endl;
    }
    void sortData() {
        std::cout << "sortData" << std::endl;
    }
    void writeData() {
        std::cout << "writeData" << std::endl;
    }
};

int main() {

    Sort* sort = new QuickSort;
    sort->processData();


    D1 d;
    cout << d.getID();

    C c;
    c.init();
    c.update();

    Car3 car3("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
    car3.car3_details();

    Car1 car1("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
    car1.car1_details();


    //overriding inherited functions
    Employee1 worker("John Smith", 10, 2);
    Manager1 ceo("Jack Hobbs", 0, 0, "Eats R Us");
    Manager1 cto("Elizabeth Shaw", 2, 0, "IT");
    worker.display1("Mr");
    ceo.display1();
    cto.display1();
    //ceo.display("Mr"); it doesnt work because it's a funtion
    //that derived class hides all the overloads of the same
    //function from the base class

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