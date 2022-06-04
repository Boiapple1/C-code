#include <iostream>

using namespace std;

int main() {
    //While loops
    // Initialize the variable money
    int money = 20;
    // Initialize the variable icecream_price
    int icecream_price = 5;
    // Prints value of variables
    cout << "Intial money = " << money << endl;
    cout << "Ice-cream price = " << icecream_price << endl;
    // Start of the  while loop
    while (money >= icecream_price) {
        // Body of the while loop  
        cout << "Buy an ice-cream" << endl;
        money = money - icecream_price;
        cout << "Remaining money = " << money << endl;
    }
    // End of the  while loop
    cout << "You can't buy an ice-cream" << endl;
    
    //do while loop
    int money = 0;
    // Initialize the variable icecream_price
    int icecream_price = 5;
    // Prints value of variables
    cout << "Intial money = " << money << endl;
    cout << "Ice-cream price = " << icecream_price << endl;
    // Start of the  do-while loop
    do {
        // Body of the do-while loop  
        cout << "Buy an ice-cream" << endl;
        money = money - icecream_price;
        cout << "Remaining money = " << money << endl;
    } while (money >= icecream_price);
    // End of the  do-while loop
    cout << "You can't buy an ice-cream" << endl;

    //for loops 
    int icecream;
    // for loop start
    for (icecream = 5; icecream > 0; icecream--) {
        // loop body
        cout << "Number of free icecream = " << icecream << endl;
        cout << "Buy an icecream" << endl;
    }
    //infinite loops
    for (; ;) {
        cout << "Hey, I am infinite loop" << endl;
        int a;
        cin >> a;
        if (a == 1) {
            break;
            return 0;
        }
    }

    int number = 1;
    while (number > 0) {
        cout << number << endl;
        int a;
        cin >> a;
        if (a == 1) {
            return number=1;
        }

    }

    //nested loop
    int inner, outer;
    // Outer for loop
    for (outer = 6; outer <= 8; outer++) {
        // Outer for loop body
        cout << "Table of " << outer << " is:" << endl;
        // Inner for loop
        for (inner = 1; inner <= 5; inner++) {
            // Inner for loop body
            cout << outer << " * " << inner << " = " << (outer * inner) << endl;
        }
        // Exit inner for loop
    }
    
    //break statement
    int icecream;
    // for loop start
    for (icecream = 5; icecream > 0; icecream--) {
        // loop body
        cout << "Number of free ice-creams = " << icecream << endl;
        // break statement
        if (icecream == 2) {
            break;
        }
        cout << "Buy an icecream" << endl;
    }
    // Exit loop
    cout << "Sorry! We ran out of ice-cream" << endl;

    //continue statement
     // Initialize variable icecream
    int icecream;
    // for loop start
    for (icecream = 5; icecream > 0; icecream--) {
        // loop body
        cout << "Number of free ice-creams = " << icecream << endl;
        // continue statement
        if (icecream == 2) {
            cout << "Sorry! We ran out of ice-cream" << endl;
            continue;
        }
        cout << "Buy an icecream" << endl;
    }

    //challege
      // Initialize variable
    int base = 2, exponent = 3, result = 1;
    // for loop initialization
    for (int counter = 1; counter <= exponent; counter++) {
        // for loop body
        result *= base;
    }
    // Exit for loop
    cout << result;
}