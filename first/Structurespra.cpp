#include <iostream>
using namespace std;

struct Smartphone {
	string name;
	int storageSpace;
	string color;
	float price;

};

void printSmartphoneInfo(Smartphone smartphone) {
	cout << "name: " << smartphone.name << endl;
	cout << "storageSpace: " << smartphone.storageSpace << endl;
	cout << "color: " << smartphone.color << endl;
	cout << "price: " << smartphone.price << endl;

}

int main()
{
	string name = "Iphone 12";
	int storageSpace = 32;
	string color = "black";
	float price = 999.99;

	string name2 = "Samsung Galaxy s21 Ultra";
	int storageSpace2 = 64;
	string color2 = "gray";
	float price2 = 888.88;

	Smartphone smartphone;
	smartphone.name = "iphone 13";
	smartphone.storageSpace = 64;
	smartphone.color = "blue";
	smartphone.price = 1999.99;

	cout << "name: " << smartphone.name << endl;
	cout << "storageSpace: " << smartphone.storageSpace << endl;
	cout << "color: " << smartphone.color << endl;
	cout << "price: " << smartphone.price << endl;

	printSmartphoneInfo(smartphone);
	system("pause>0");
}