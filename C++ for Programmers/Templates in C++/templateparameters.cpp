/*
type parameter
std::vector<int> vec = {1, 2, 3, 4, 5};
nontype parameter
std::array<int, 5> arr = {1, 2, 3, 4, 5};
template-template parameter
template <typename T, template <typename, typename> class Cont> class Matrix{
...
Matrix<int, std::vector> myIntVec;
*/
// templateTypeParameter

#include <initializer_list>
#include <iostream>
#include <list>
#include <vector>
#include <typeinfo>

class Account {
public:
    explicit Account(double amt) : balance(amt) {}
private:
    double balance;

};

union WithString {
    std::string s;
    int i;
    WithString() :s("hello") {}
    ~WithString() {}
};

template <typename T>
class ClassTemplate {
public:
    ClassTemplate() {
        std::cout << "typeid(T).name(): " << typeid(T).name() << std::endl;
    }
};

//template-template parameter

template <typename T, template <typename, typename> class Cont >
class Matrix {
public:
    explicit Matrix(std::initializer_list<T> inList) : data(inList) {
        for (auto d : data) std::cout << d << " ";
    }
    int getSize() const {
        return data.size();
    }

private:
    Cont<T, std::allocator<T>> data;

};


int main() {

    std::cout << std::endl;

    ClassTemplate<int> clTempInt;
    ClassTemplate<double> clTempDouble;
    ClassTemplate<std::string> clTempString;

    ClassTemplate<Account> clTempAccount;
    ClassTemplate<WithString> clTempWithString;

    std::cout << std::endl;

    //non-type template parameter
    std::cout << std::endl;

    // output the array
    std::array <int, 8> array1{ 1,2,3,4,5,6,7,8 };
    std::for_each(array1.begin(), array1.end(), [](int v) {std::cout << v << " "; });

    std::cout << std::endl;

    // calculate the sum of the array by using a global variable
    int sum = 0;
    std::for_each(array1.begin(), array1.end(), [&sum](int v) { sum += v; });
    std::cout << "sum of array{1,2,3,4,5,6,7,8}: " << sum << std::endl;

    // change each array element to the second power
    std::for_each(array1.begin(), array1.end(), [](int& v) { v = v * v; });
    std::for_each(array1.begin(), array1.end(), [](int v) {std::cout << v << " "; });
    std::cout << std::endl;

    std::cout << std::endl;

    //template-templaate parameter


    std::cout << std::endl;

    Matrix<int, std::vector> myIntVec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << std::endl;
    std::cout << "myIntVec.getSize(): " << myIntVec.getSize() << std::endl;

    std::cout << std::endl;

    Matrix<double, std::vector> myDoubleVec{ 1.1, 2.2, 3.3, 4.4, 5.5 };
    std::cout << std::endl;
    std::cout << "myDoubleVec.getSize(): " << myDoubleVec.getSize() << std::endl;

    std::cout << std::endl;

    Matrix<std::string, std::list> myStringList{ "one", "two", "three", "four" };
    std::cout << std::endl;
    std::cout << "myStringList.getSize(): " << myStringList.getSize() << std::endl;

    std::cout << std::endl;

}