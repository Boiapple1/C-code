#include <iostream>
#include <string>
#define PI 3.1416
using namespace std;

//Access Modifiers are private,public, and protected

class Rectangle {
    int length;
    int width;

public:

    // We only write the declaration here
    void setLength(int l);
    int area();
};
//scope operator
// Somewhere else in the code
void Rectangle::setLength(int l) { // Using the scope resolution operator
    length = l;
}

int Rectangle::area() {
    return length * width;
}

class Circle {
private:
    string mod = "debug";
    // int arr[] = {1, 2, 3, 4, 5};
    int radius = 1;

public:
    void setRadius(int r) {
        if (r >= 0) {
            radius = r;
        }
    }

    int getRadius() {
        return radius;
    }

    double getArea() {
        return PI * radius * radius;
    }
};

class Date {
    int day;
    int month;
    int year;

public:
    // Default constructor
    Date() {
        // We must define the default values for day, month, and year
        day = 0;
        month = 0;
        year = 0;
    }

    // Parameterized constructor
    Date(int day, int month, int year) {
        // Using this pointer
        this->day = day;
        this->month = month;
        this->year = year;
    }


    // A simple print function
    void printDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};
//

  //copy constructors
    //The copy constructor allows a class to create an object 
    //by copying an existing object.
class Account {
public:
    Account(const Account& other);
};

//move constructors
//The move constructor allows the data of one object to be
//transferred completely to another object.
class Account1 {
public:
    Account1(Account&& other);
};


//implicit constructor
class Account2{
public:
    Account2(double b) : balance(b) {}
    Account2(double b, std::string c) :balance(b), cur(c) {}
private:
    double balance;
    std::string cur;
};
void strange(Account2 a) {
    std::cout << "It works!" << std::endl;
}
//explicit
class Account3 {
public:
    explicit Account3(double b) : balance(b) {}
    Account3(double b, std::string c) :balance(b), cur(c) {}

private:
    double balance;
    std::string cur;
};

void strange(Account3 a) {
    std::cout << "It works!" << std::endl;
}

//Member initializer list allows us to initialize data
//members of an object without writing assignment statements in a constructor.
class Sphere {
private:
    const double density;
    double radius;
public:
    Sphere(double r) : radius(r), density(4.3) {
        // The following initialization wouldn't work, because density is a const
        // density =  4.3;
    }
    double volume() {
        return 4 * PI * radius * radius * radius / 3;
    }
    double mass() {
        return density * volume();
    }
};

//Constructor delegation is when one constructor of a class invokes another
//constructor of the same classs.
//
class Collector {
private:
    int size;
    int capacity;
    int* list;

public:
    Collector() : Collector(0) {}
    Collector(int cap) : capacity(cap), size(0) {
        if (cap > 0) {
            list = new int[cap];
        }
        else
            capacity = 0;
    }

    bool append(int v) {
        if (size < capacity) {
            list[size++] = v;
            return true;
        }
        else
            return false;
    }
    // A simple print function
    void dump() {
        for (int i = 0; i < size; i++) {
            cout << list[i] << " ";
        }
        cout << endl;
    }

    ~Collector() {
        cout << "Deleting the object " << endl;
        if (capacity > 0)
            delete[] list;
    }
};

//Constructors and Destructors using default
//
class SomeType {
public:

    // state the compiler generated default constructor
    SomeType() = default;

    // constructor for int
    SomeType(int value) {
        std::cout << "SomeType(int) " << std::endl;
    };

    // explicit Copy Constructor
    explicit SomeType(const SomeType&) = default;

    // virtual destructor
    virtual ~SomeType() = default;

};
//A friend function is an independent function which has access to the 
//variables and methods of its befriended class.
class Ball {
    double radius;
    string color;

public:
    Ball() {
        radius = 0;
        color = "";
    }

    Ball(double r, string c) {
        radius = r;
        color = c;
    }

    void printVolume();
    void printRadius();

    // The friend keyword specifies that this is a friend function
    friend void setRadius(Ball& b, double r);

};

// This is a member function that calculates the volume.
void Ball::printVolume() {
    cout << (4 / 3) * 3.142 * radius * radius * radius << endl;
}

void Ball::printRadius() {
    cout << radius << endl;
}

// The implementation of our friend function
void setRadius(Ball& b, double r) {
    b.radius = r;
}

//Struct are almost identical to classes. The default access specifier for a 
//struct is public instead of private
struct Person {
    int age;
    int size;
    int weight;
    std::string name;
};

//A union is a special data type where all members start at the same address.
//  A union can only hold one type at a time, therefore, we can save memory.
//
union Value {
    int i;
    double d;
};


int main() {
    Value v = { 123 };      // now v holds an int
    std::cout << v.i << '\n';    // write 123
    v.d = 987.654;          // now v holds a double
    std::cout << v.d << '\n';

    Ball b(30, "green");
    cout << "Radius: ";
    b.printRadius();
    setRadius(b, 60);
    cout << "New radius: ";
    b.printRadius();
    cout << "Volume: ";
    b.printVolume();

    SomeType someType;
    SomeType someType2(2);
    SomeType someType3(someType2);


    //using pointer and deleting with destructors
    Collector* c9;
    c9 = new Collector(10);
    for (int i = 0; i < 15; i++) {
        cout << c9->append(i) << endl;
    }
    delete c9;
    cout << "Exiting program" << endl;

    // A useless Collector object of 0 capacity
    Collector c1;
    // Another Collector object, this time with a capacity of 10
    Collector c2(10);

    for (int i = 0; i < 15; i++) {
        cout << c2.append(i) << endl;
    }


    Sphere s(3.2);
    cout << "Volume: " << s.volume() << ", mass: " << s.mass();


    //implicit constructor
    Account2 account = 100.0; // No ERROR
    Account2 account1(100.0);
    Account2 account2 = { 100.0, "EUR" };
    strange(100.0);        // No ERROR
    strange(false);

    //explicit
    Account3 account1(100.0);
    Account3 account2 = { 100.0, "EUR" };

    Circle c;
    c.setRadius(10);
    cout << "The area of a circle of radius " << c.getRadius() << " is " << c.getArea() << endl;
    return 0;
    //A constructors name must be exactly as the name of its class. 
    // Call the Date constructor to create its object;
    //In a default constructor, we define the default 
    //values for the data members of the class.the 
    //constructor creates an object in which the data members are initialized to their default values.

    Date d; // Object created with default values!
    d.printDate();

    //
    //In a parameterized constructor, we pass arguments to the constructor 
    //and set them as the values of our data members.

    Date d(1, 8, 2018); // Object created with specified values!
    d.printDate();

 

}