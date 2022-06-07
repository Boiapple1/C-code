#include <iostream>

using namespace std;

// print_array function will print the values of an array
void print_array(int number[], int size) {
    for (int i = 0; i < size; i++) {
        cout << number[i] << " ";
    }
    cout << endl;
}
void print_array1(int arr[3][3], int row, int column) {
    // Outer loop 
    for (int i = 0; i < row; i++) {
        // Inner loop
        for (int j = 0; j < column; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void print_array2(int arr[3][2], int row, int column) {
    // Outer loop 
    for (int i = 0; i < row; i++) {
        // Inner loop
        for (int j = 0; j < column; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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
// sort_elements function
void sort_elements(int arr[], int size) {
    // Outer loop
    for (int i = 0; i < size; i++) {
        // Inner loop
        for (int j = i + 1; j < size; j++) {
            // If condition
            if (arr[i] < arr[j]) {
                // Swap elements
                // Store the value at index j in temp
                int temp = arr[j];
                // Store the value at index i at index j
                arr[j] = arr[i];
                // Store the value of temp at index i
                arr[i] = temp;
            }
        }
    }
}

int add_diagonal(int arr[3][3], int row, int col) {
    // Initialize sum
    int sum = 0;
    // Outer loop to traverse rows in a 2D array
    for (int i = 0; i < row; i++) {
        // Inner loop to traverse values in each row
        for (int j = 0; j < col; j++) {
            // Check if row index is equal to column index
            if (i == j) {
                // Add element at row index i and column index j in sum
                sum = sum + arr[i][j];
            }
        }
    }
    return sum;
}


//challege5
// multiplication function
void multiplication(int arr1[][2], int row1, int col1, int arr2[][2], int row2, int col2, int result[][2]) {
    // Check if col of first array equal to row of second array
    if (col1 == row2) {
        // Traverse first array row
        for (int x = 0; x < row1; x++) {
            // Traverse second array columns
            for (int y = 0; y < col2; y++) {
                // Traverse first array columns and second array rows
                for (int z = 0; z < col1; z++) {
                    // Multiplication
                    result[x][y] = result[x][y] + arr1[x][z] * arr2[z][y];
                }
            }
        }
    }
    else {
        // Traverse first array row
        for (int x = 0; x < row1; x++) {
            // Traverse second array columns
            for (int y = 0; y < col2; y++) {
                // Fill the elements of array by -1
                result[x][y] = -1;
            }
        }
    }

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
   
    const int size1 = 4;
    
    int arr[size1] = { 10, 67, 98, 31 };

    cout << "Array before sorting: " << endl;
    // Call print_array function
    print_array(arr, size);

    // Call sort_elements function
    sort_elements(arr, size);

    cout << "Array after sorting: " << endl;
    // Call print_array function
    print_array(arr, size);

    // Declare variable
    int result;
    // Initialize 2D array
    int arr1[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    // Call print_array function
    print_array1(arr1, 3, 3);
    // Call add_diagonal function and store your output in result
    result = add_diagonal(arr1, 3, 3);
    // Print the value of result
    cout << "sum = " << result;


    //challege 5
      // Initialize arr1
    int arr11[3][2] = { {1,2},{3,4},{5,6} };
    // Initialize arr2
    int arr21[2][2] = { {10,20},{30,40} };
    // Initialize result
    int result1[3][2] = { {0,0},{0,0},{0,0} };
    // Call function multiplication
    multiplication(arr11, 3, 2, arr21, 2, 2, result1);
    // Call function print_array
    print_array2(result1, 3, 2);

}