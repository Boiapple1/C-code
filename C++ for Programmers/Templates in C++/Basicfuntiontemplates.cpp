

/*must be the same type
template <typename T>
void xchg(T& x , T& y)

two different parameters
template <typename T, typename T1>
void  add(T& x, T1& y

or non-type temple parameter
template <int N>
int nTimes(int n)


*/

// templateFunctionsTemplates.cpp

#include <iostream>
#include <string>
#include <vector>

void xchg(int& x, int& y) {   // 1
	int t = x;
	x = y;
	y = t;
}

template <typename T>
void xchg(T& x, T& y) {
	T t = x;
	x = y;
	y = t;
}

template <typename T>         // 3
void xchg(T& x, T& y, T& z) {
	xchg(x, y);
	xchg(x, z);
}

template <int N>
int nTimes(int n) {
	return N * n;
}

template<int m, int n>
struct Power {
	static int const value = m * Power<m, n - 1>::value;
};

template<int m>
struct Power<m, 0> {
	static int const value = 1;
};


template<int n>
int power(int m) {
	return m * power<n - 1>(m);
}

template<>
int power<1>(int m) {
	return m;
}

template<>
int power<0>(int m) {
	return 1;
}



int main() 
    std::cout << power<10>(2) << std::endl;
	//example of template arguments
	std::cout << power(2, 10) << std::endl;

	std::cout << std::endl;

	bool t = true;
	bool f = false;
	std::cout << "(t, f):  (" << t << ", " << f << ") " << std::endl;
	xchg(t, f);
	std::cout << "(t, f):  (" << t << ", " << f << ") " << std::endl;

	std::cout << std::endl;

	int int2011 = 2011;
	int int2014 = 2014;
	std::cout << "(int2011, int2014):  (" << int2011 << ", " << int2014 << ") " << std::endl;
	xchg(int2011, int2014);
	std::cout << "(int2011, int2014):  (" << int2011 << ", " << int2014 << ") " << std::endl;

	std::cout << std::endl;

	std::string first{ "first" };
	std::string second{ "second" };
	std::cout << "(first, second):  (" << first << ", " << second << ") " << std::endl;
	xchg(first, second);
	std::cout << "(first, second):  (" << first << ", " << second << ") " << std::endl;

	std::cout << std::endl;
	std::vector<int> intVec1{ 1, 2, 3, 4, 5 };
	std::vector<int> intVec2{ 5, 4, 3, 2, 1 };

	std::cout << "vec1: ";
	for (auto v : intVec1)std::cout << v << " ";
	std::cout << "\nvec2: ";
	for (auto v : intVec2)std::cout << v << " ";
	std::cout << std::endl;
	xchg(intVec1, intVec2);

	std::cout << "vec1: ";
	for (auto v : intVec1)std::cout << v << " ";
	std::cout << "\nvec2: ";
	for (auto v : intVec2)std::cout << v << " ";
	std::cout << std::endl;


	std::cout << "\n\n";

	std::cout << "nTimes<5>(10): " << nTimes<5>(10) << std::endl;
	std::cout << "nTimes<10>(5): " << nTimes<10>(5) << std::endl;

	std::cout << std::endl;

	//overlolading function templates
	std::cout << std::endl;

	int intA = 5;
	int intB = 10;
	int intC = 20;

	double doubleA = 5.5;
	double doubleB = 10.0;

	std::cout << "Before: " << intA << ", " << intB << std::endl;
	xchg(intA, intB);              // 1
	std::cout << "After: " << intA << ", " << intB << std::endl;

	std::cout << std::endl;

	std::cout << "Before: " << doubleA << ", " << doubleB << std::endl;
	xchg(doubleA, doubleB);        // 2
	std::cout << "After: " << doubleA << ", " << doubleB << std::endl;

	std::cout << std::endl;

	xchg<>(intA, intB);            // explicit 2
	xchg<int>(intA, intB);         // explicit 2: xchg<int>
	// xchg<double>(intA, intB);      // ERROR explicit xchg<double>

	std::cout << "Before: " << intA << ", " << intB << ", " << intC << std::endl;
	xchg(intA, intB, intC);        // 3
	std::cout << "After: " << intA << ", " << intB << ", " << intC << std::endl;

	std::cout << std::endl;
}