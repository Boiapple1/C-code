#include <iostream>

using namespace std;

int main() {
    //if and else if statements
    // Initialize variable money
    int money = 6;
    // if block
    if (money >= 20) {
        cout << "You can gift a watch" << endl;
    }
    // else-if block
    else if (money >= 10) {
        cout << "You can gift a comic book " << endl;
    }
    else if (money >= 5) {
        cout << "You can gift a chocolate " << endl;
    }
    // else block
    else {
        cout << "You can gift a pen " << endl;
    }

    //case statements(switch)

      // Initialize variable grade
    char grade = 'C';
    // switch statement
    switch (grade) {
        // first case 
    case 'A':
        cout << "Exceptional performance!";
        break;
        // second case  
    case 'B':
        cout << "Well done!";
        break;
        // third case    
    case 'C':
        cout << "Good!";
        break;
        // fourth case    
    case 'D':
        cout << "You need to do more hardwork!";
        break;
        // fifth case    
    case 'F':
        cout << "Fail";
        break;
        // default case    
    default:
        cout << "Invalid input";
    }

    //different switch statements with range between two numbers

    int money = 6;
    switch (money) {
        // first case
    case 20 ... 100:
        cout << "You can gift a watch" << endl;
        break;
        // compares value of case label from 10 to 19 with the value of money
    case 10 ... 19:
        cout << "You can gift a comic book " << endl;
        break;
        // compares value of case label from 9 to 5 with the value of money
    case 5 ... 9:
        cout << "You can gift a chocolate " << endl;
        break;
        // default case
    default:
        cout << "You can gift a pen " << endl;
    }

    //if statement with ternary operator

      // Initialize variable money 
    int money = 210;
    // Declare variable result
    string result;
    // Ternary operator
    result = (money >= 20) ? "You can gift a watch" : "You can gift a pen ";
    // prints result
    cout << result;
    
    //challege 2

    char character = 'a';

    // if block
    if (character >= 'A' && character <= 'Z') {

        cout << "upper-case alphabet";
    }
    // else if block
    else if (character >= 'a' && character <= 'z') {

        cout << "lower-case alphabet";
    }
    // else block
    else {

        cout << "not an alphabet";
    }

    
}