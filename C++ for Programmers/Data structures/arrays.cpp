//
// static array
// int dot[3]={1,2,3};
//or int dot[]={1,2,34};
//int dash[5]={1,2,3}; the las two spots will be 0
// 
// dynamic arrays
// datatype *arrayName = new datatype[sie];
//
#include <iostream>
using namespace std;

class ArrayList {
	int* arr;
	int num_elements;
	int capacity;

public:
	ArrayList(int size) {
		arr = new int[size];
		num_elements = 0;
		capacity = size;
	}
	void insert(int val) {
		if (num_elements < capacity) {
			arr[num_elements] = val;
			num_elements++;
		}
		else {
			resize();
			arr[num_elements] = val;
			num_elements++;
		}
	}

	int getAt(int index) {
		return arr[index];
	}

	void resize() {
		int* tempArr = new int[capacity * 2];
		capacity *= 2;

		for (int i = 0; i < num_elements; i++) {
			tempArr[i] = arr[i];
		}

		delete[] arr;
		arr = tempArr;
	}

	int length() {

		return num_elements;
	}

	void print() {
		for (int i = 0; i < num_elements; i++)
			cout << arr[i] << " ";
		cout << endl;
	}

};

int main() {
	int size = 10;

	//dynamic array initialization
	int* dynamicArray = new int[size];
	for (int i = 0; i < size; i++) {
		dynamicArray[i] = i;
	}

	//static array initialization
	int staticArray[size] = { 1,2,3,4,5,6,7,8,9,10 };
	float staticArray2[] = { 2.3,7.9,5.6,4.2,9.1 };

	//printing an static array
	cout << "Static Array: ";
	for (int i = 0; i < size; i++) {
		cout << staticArray[i] << " ";

	}
	cout << endl;
	
	//printitng an Dynamic array
	cout << "Dynamic Array: ";
	for (int i = 0; i < size; i++) {
		cout << dynamicArray[i] << " ";

	}
	//deleting allocated memory
	delete[] dynamicArray;
	

	//changing a digit in a array
	//int arr[3]={1,2,3};
	// arr[2]=4;
	// now array is {1,2,4};
	//
	//to resize it's only posible in a dynamic array
	//
	// class ArrayList{
	// int * arr; - array growing dynamically
	// int num_elements;- number of elements in an array
	// int capacity;- current capacity of an array
	//}
	// 
	//void resize(){
	// int * temparr= new int[capacity*2];
	// capacity *= 2;
	// (just double the capacity)
	// 
	// for(int i=0; i<num_elements; i++){
	// temparr{i]=arr[i];
	// }
	// 
	// deleting the allocated space
	// delete[] arr;
	// arr=temparr;
	// }
	// 
	// to add items to a dynamic array
	// 
	// void insert(int val){
	// 
	// if(num_elements<capacity){
	// arr[num_elements]=val;
	// num_elements++;
	// }else
	// resize();
	// arr[num_elements]=val;
	// num_elements++;
	// }
	// }
	// 
	//
	ArrayList arr(1);
	cout << "Arr length : " << arr.length() << endl;
	arr.insert(1);
	arr.insert(2);
	arr.insert(3);
	arr.insert(4);
	arr.insert(5);
	arr.insert(6);
	arr.insert(7);
	arr.insert(8);
	cout << "Arr length : " << arr.length() << endl;
	cout << "Array : ";
	arr.print();
	cout << "Element at index 5 is " << arr.getAt(4) << endl;
}
