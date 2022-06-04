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
    
    //challege 2

    int number = 7;
    bool isPrime = true;
    // if block
    /*Checks if the value of a `number` is less than or equal to
    1. If yes, then execute line No. 13 to 16. If no, then execute
    line No. 18*/
    if (number <= 1) {
        //Sets the value of `isPrime` to false
        isPrime = false;
    }
    // for block
    for (int counter = 2; counter <= number / 2; counter++) {
        // if block
        if (number % counter == 0) {
            isPrime = false;
            // jump to line No. 27
            break;
        }
    }
    // if-else block
    /*If isPrime = true then execute line No. 30.
    If no, then execute line No. 32*/
    if (isPrime) {
        cout << "Number is prime";
    }
    else {
        cout << "Number is not prime";
    }

    //challege 3
      // Initialize variables
    int decimal = 10, binary = 0;
    int remainder, product = 1;
    // Prints value of decimal
    cout << "Decimal Number = " << decimal << endl;
    // while block
    /*Checks if the value of `decimal` is not equal to `0`.
    If yes, then execute line No. 17 to 21.
    If no, then execute line No. 23.
    */
    while (decimal != 0) {
        remainder = decimal % 2;
        binary = binary + (remainder * product);
        decimal = decimal / 2;
        product *= 10;
    }
    // while exit
    cout << "Binary Number = " << binary;

    //challege 4
    int number = 2002;
    int remainder = 0, reverse = 0;
    // To reverse a number store it in temp
    int temp = number;
    // while loop
    while (temp != 0) {
        // Get the last digit of temp
        remainder = temp % 10;
        // Store the remainder after the initially stored value in reverse
        reverse = reverse * 10 + remainder;
        // Remove the last digit of temp
        temp = temp / 10;
    }
    // if condition
    if (number == reverse) {
        cout << "is palindrome";
    }
    else {
        cout << "not a palindrome";
    }
    
}