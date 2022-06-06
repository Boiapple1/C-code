#include <iostream>

using namespace std;

// print_array function will print the values of an array
void print_array(int number[], int size) {
    for (int i = 0; i < size; i++) {
        cout << number[i] << " ";
    }
    cout << endl;
}

// modify_array function
void modify_array(int number[], int size) {
    // Traverse array
    for (int i = 0; i < size; i++) {
        // If value less tha 50 set it to -1
        if (number[i] < 50)
            number[i] = -1;
    }
    cout << "Values of array inside the function:" << endl;
    // Call print_array function 
    print_array(number, size);
}

// left_rotate function
void left_rotate(int arr[], int size) {
    // Declares a loop counter variable
    int j;
    // Store the element at index 0
    int temp = arr[0];
    // Traverse array
    for (j = 0; j < size - 1; j++) {
        // Left Shift element
        arr[j] = arr[j + 1];
    }
    // Store the value of temp at the last index of an array 
    arr[j] = temp;

}

int main() {

    const int size = 8;
    // Initialize array
    int Roll_Number[size] = { 100, 101, 102, 103, 104 };

    cout << "Values of array before updation: " << endl;
    // Print values of array
    for (int i = 0; i < size; i++) {
        // Accesss elements of array at index i
        cout << Roll_Number[i] << "  ";
    }
    cout << endl;
    // Update values of array element at index 3 and 4
    Roll_Number[3] = 22222;
    Roll_Number[4] = 33333;
    cout << "Values of array after updation: " << endl;
    // Print updated values of  array
    for (int i = 0; i < size; i++) {
        // Access elements of array at index i
        cout << Roll_Number[i] << "  ";
    }
    cout << endl;


    // Initialize values of array
    int number[size] = { 67, 89, 56, 43, 29, 15, 90, 67 };

    cout << "Values of array before function call:" << endl;
    // Call print_array function
    print_array(number, size);
    // Call modify_array function
    modify_array(number, size);
    cout << "Values of array after function call:" << endl;
    // Call print_array function
    print_array(number, size);


    //crreating a two dimensional array
    //datatype arrayname [rowsize][columnsize]
    // Initialize row and column index 
    const int row = 3, column = 3;
    // Initialize static 2D array
    int Student[row][column] = { {100, 134, 234}, {34, 189, 221}, {109, 139, 56} };

    //Print static 2D Array 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            // Access element at row index i and column index j
            cout << Student[i][j] << " ";
        }
        cout << endl;
    }

    int arr[size] = { 1, 2, 3, 4, 5 };

    cout << "Array before left rotation" << endl;
    // Call print_array function
    print_array(arr, size);
    // Call left_rotate function
    left_rotate(arr, size);

    cout << "Array after left rotation: " << endl;
    // Call print_array function
    print_array(arr, size);
}