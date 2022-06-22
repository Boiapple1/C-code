//multidimensional arrays 
//
//two dimensional array
// data_type arr[x][y];
// 
// dynamic
//datatype ** arr = new datatype *[rowSize];
// for(int i=0;i<rowSize;i++)
// arr[i]= new datatype[colSize];
// 
//
#include <iostream>
using namespace std;

int main() {
	const int row = 2, col = 2;
	
	//static arr
	int staticArr[row][col] = { {1,2},{3,4} };
	cout << "Static two- dimensional array: ";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << staticArr[i][j] << " ";
		}
	}
	cout << endl;

	//dynamic arr
	int** dynamicArr = new int* [row];
	for (int i = 0; i < row; i++) {
		dynamicArr[i] = new int[col];
	}
	int k = 0;
	for (int i = 0; i < row; i++)
		{
		for (int j = 0; j < col; j++) {
			dynamicArr[i][j] = ++k;
		}
		}
	cout << "Dynamic two dimensional array: ";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			cout << dynamicArr[i][j] << " ";

		}
	}
	cout << endl;
	//freeing memory
	for (int j = 0; j < row; j++) {
		delete[] dynamicArr[j];
	}
	delete[] dynamicArr;

	//
	//array index
	// row=2
	// col=2
	// int arr[row][col]={{1,2},{3,4}};
	// arr[0][0]  arr[0][1]
	//		1			2
	// arr[1][0]	arr[1][1]
	//		3			4
	//
	// changing elements in 2 d array
	// int arr[2][2]={{1,2},{3,4}}
	// arr[1][1]=10
	// arr equal to {{1,2},{3,10}}
	//
}