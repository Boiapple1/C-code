#include <iostream>
#include <string.h>
using namespace std;

//global variables
int global = 3;

void function() {
    int function_local = 10;
    cout << "global = " << global << endl;
    global = 9;
}

//function overloading
//meaning same name different parameters 
const char* min(const char* s, const char* t) {
    return (strcmp(s, t) < 0) ? s : t;
}

float min(float x, float y) {
    return (x < y) ? x : y;
}

float min(float x, float y, float z) {
    return x < y ? (x < z ? x : z) : (y < z ? y : z);
}



// Function definition
int make_juice(int water = 1, int fruit = 3) {
    // Define new  variable juice of int type
    int juice;
    // Adds water in apple and saves the output in juice
    juice = water + fruit;
    // Prints text on the screen  
    cout << "Your juice is ready" << endl;
    // Returns juice value in output 
    return juice;

}

void passValue(int number) {
    // Multiply the number by 10
    number = number * 10;
    cout << "Value of number inside the function = " << number << endl;
}
void passReference(int& number) {
    // Multiply the number by 10
    number = number * 10;
    cout << "Value of number inside the function = " << number << endl;
}

//lambda
int addFunc(int a, int b) { return a + b; }


int main() {
    // Declares a variable juice_glass
    int juice_glass;

    // Calls function make_juice without any actual paramters
    juice_glass = make_juice();
    cout << "Number of juice glass = " << juice_glass << endl;
    // Calls function make_juice with only one actual paramters
    juice_glass = make_juice(5);
    cout << "Number of juice glass = " << juice_glass << endl;
    // Calls function make_juice and save its output in juice_glass
    juice_glass = make_juice(2, 5);
    cout << "Number of juice glass = " << juice_glass << endl;

    //pass value in functions
    // Initialize variable
    int number = 10;
    cout << "Value of number before function call = " << number << endl;
    // Call function
    passValue(number);
    cout << "Value of number after function call = " << number << endl;

    //pass by reference in functions
      // Initialize variable
    int number = 10;
    cout << "Value of number before function call = " << number << endl;
    // Call function
    passReference(number);
    cout << "Value of number after function call = " << number << endl;

    //global variables
    int main_local = 20;
    global = 5;
    cout << "global = " << global << endl;
    global = 7;

    function();
    cout << "global = " << global << endl;

    //overloading
    const char* s = min("abc", "xyz");
    float f = min(4.45F, 1.23f);
    int f2 = min(2011, 2014);
    // float f3 = min("abc", 1.23f);

    std::cout << s << std::endl;
    std::cout << f << std::endl;
    std::cout << f2 << std::endl;

    float f2 = min(4.45f, 1.23f, 0.19f);

    std::cout << f << std::endl;
    std::cout << f2 << std::endl;

    /*lambda functions
    [] no binding
    [a] a per copy
    [&a] a per reference
    [=] all used variables per copy
    [&] all used variable per reference
    [=,&a] per default per copy,  a per reference
    [this] data and member of the enclosing class per copy
    [&,a] per default per refence; a per copy
    [1=std::move(lock)] moves lock (c++14)
    */
    auto addObj = [](int a, int b) { return a + b; };

    addObj(3, 4) == addFunc(3, 4);

    return 0;
}