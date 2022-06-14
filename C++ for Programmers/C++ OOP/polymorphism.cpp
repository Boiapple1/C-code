//we want our derived class to inherit a method from the base class
// and have a different implementation for it? 
//That is when polymorphism comes in, a fundamental
// concept in OOP paradigm.
//
#include <iostream>
using namespace std;

// A simple Shape interface which provides a method to get the Shape's area
class Shape {
public:
    virtual float getArea() {}
};

// A Rectangle is a Shape with a specific width and height
class Rectangle : public Shape {   // derived form Shape class
private:
    float width;
    float height;

public:
    Rectangle(float wid, float heigh) {
        width = wid;
        height = heigh;
    }
    float getArea() {
        return width * height;
    }
};

// A Circle is a Shape with a specific radius
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float rad) {
        radius = rad;
    }
    float getArea() {
        return 3.14159f * radius * radius;
    }
};


//pure virtual member
class Shape1 {
public:
    virtual float getArea1() = 0;
};
// A Rectangle is a Shape with a specific width and height
class Rectangle1 : public Shape1 {   // derived form Shape class
private:
    float width;
    float height;

public:
    Rectangle1(float wid, float heigh) {
        width = wid;
        height = heigh;
    }
    float getArea1() {
        return width * height;
    }
};

// A Circle is a Shape with a specific radius
class Circle1 : public Shape1 {
private:
    float radius;

public:
    Circle1(float rad) {
        radius = rad;
    }
    float getArea1() {
        return 3.14159f * radius * radius;
    }
};

// A Square is a Shape with a specific length
class Square1 : public Shape1 {
private:
    float length;

public:
    Square1(float len) {
        length = len;
    }
    float getArea1() {
        return length * length;
    }
};

int main() {
    //pure virtual member
    Shape1* shape1[3];   // Referencing Shape class to Rectangle object
//Shape * shape1 = new Shape(); //Instantiating the shape object

    Rectangle1 r(2, 6);    // Creating Rectangle object
    shape1[0] = &r;   // Referencing Shape class to Rectangle object

    Circle1 c(5);    // Creating Circle object
    shape1[1] = &c;   // Referencing Shape class to Circle object

    Square1 s(10);   // Creating Square object
    shape1[2] = &s;     // Referencing Shape class to Circle object

    for (int i = 0; i < 3; i++)
        cout << shape1[i]->getArea1() << endl;

    //
    //

    Rectangle r(2, 6);    // Creating Rectangle object

    Shape* shape = &r;   // Referencing Shape class to Rectangle //

    cout << "Calling Rectangle getArea function: " << r.getArea() << endl;
   
    //only works with virtual float getarea
    cout << "Calling Rectangle from shape pointer: " << shape->getArea() << endl << endl;

    Circle c(5);    // Creating Circle object

    shape = &c;   // Referencing Shape class to Circle object

    cout << "Calling Circle getArea function: " << c.getArea() << endl;
   
    //only works with virtual float getarea
    cout << "Calling Circle from shape pointer: " << shape->getArea() << endl << endl;
}