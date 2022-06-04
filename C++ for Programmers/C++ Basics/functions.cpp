#include <iostream>
using namespace std;

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




    return 0;
}