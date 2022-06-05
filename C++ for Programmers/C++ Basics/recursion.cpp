#include <iostream>

using namespace std;

int ticket_price(int person) {
    int price;
    if (person == 1) {
        price = 100;
        return price;
    }
    else {
        cout << "Person" << person << " is asking price" << endl;
        person--;
        price = ticket_price(person);
        cout << "Person" << person << " is telling price" << endl;
        return price;
    }
}


// Recursive factorial function
int factorial(int n) {
    // Invalid value
    if (n < 0) {
        return -1;
    }
    // Base case
    if (n == 1 || n == 0) {
        return 1;
    }
    // Recursive Case
    else {
        return n * factorial(n - 1);
    }
}

// Iterative factorial function
int factorial1(int n) {
    int fact = 1;

    if (n == 0) {
        fact = 1;
    }

    for (int counter = 1; counter <= n; counter++) {
        fact = fact * counter;

    }
    return fact;
}

//challege 1
// Recursive power function
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    // Recursive case
    else
        return base * power(base, exponent - 1);
}

//challege 2
// Recursive count_digits function
int count_digits(int number) {

    // Base Case
    if (abs(number) / 10 == 0) {
        return 1;
    }
    // Recursive Case  
    else {
        return 1 + count_digits(number / 10);
    }

}

int Fibonacci(int n) {

    // Base Case
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }

    // Recursive Case
    else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }

}

int main() {
    int price;
    price = ticket_price(5);
    cout << "Ticket price = " << price << endl;

    int n = 5;
    int result;
    // Call factorial function in main and store the returned value in result
    result = factorial(n);
    // Prints value of result
    cout << "Factorial of " << n << " = " << result;

    int n = 5;
    int result;
    // Call factorial function in main and store the returned value in result
    result = factorial1(n);
    // Prints value of result
    cout << "Factorial of " << n << " = " << result;

    // Initialize base and exponent
    int base = 2, exponent = 4;
    // Declare variable result
    int result;
    // Call power in main and store the returned value in result
    result = power(base, exponent);
    // Print value of result
    cout << base << " raised to power " << exponent << " = " << result;

    // Initialize number
    int number = 8625;
    // Declare variable result
    int result;
    // Call count_digits function in main and store the returned value in result
    result = count_digits(number);
    // Print value of result
    cout << "Number of digits = " << result;
   
    // Initialize variable n
    int n = 4;
    // Declare variable result
    int result;
    // Call fibonacci function in main and store its output in result
    result = Fibonacci(4);
    // Print value of result
    cout << n << "th Fibonacci number = " << result;

    return 0;

}