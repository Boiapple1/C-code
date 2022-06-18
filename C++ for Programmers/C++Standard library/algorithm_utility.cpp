// minMax.cpp
#include <iostream>
#include <algorithm>
#include <utility>

#include <functional>
//...
using std::cout;
using namespace std::placeholders;
using std::bind;
using std::function;
using std::make_pair;
using std::map;
//...

class MyData {
    MyData(MyData&& m) = default; // move constructor
    MyData& operator = (MyData&& m) = default; // move assignment 
    MyData(const MyData& m) = default; // copy constructor
    MyData& operator = (const myData& m) = default; // copy assignment
};

template <typename T>
inline void swap(T& a, T& b) {
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}

int main() {
    //std:functions and std::bind
    //
    //std::function can store arbitrary callables in variables. It’s a kind of 
    //polymorphic function wrapper. A callable may be a lambda function, a function
    //object, or a function. std::function is always necessary and can’t be replaced 
    //by auto, if you have to specify the type of the callable explicitly.
    //
    //std::bind, you can create function objects in a variety of ways:
    //bind the arguments to an arbitrary position,
    //change the order of the arguments,
    //introduce placeholders for arguments,
    //partially evaluate functions,
    //
    map<const char, std::function<double(double, double)>> tab;
    tab.insert(make_pair('+', [](double a, double b) { return a + b; }));
    tab.insert(make_pair('-', [](double a, double b) { return a - b; }));
    tab.insert(make_pair('*', [](double a, double b) { return a * b; }));
    tab.insert(make_pair('/', [](double a, double b) { return a / b; }));

    std::cout << "3.5 + 4.5\t=  " << tab['+'](3.5, 4.5) << "\n";  //3.5 + 4.5	=  8
    std::cout << "3.5 - 4.5\t=  " << tab['-'](3.5, 4.5) << "\n";  //3.5 - 4.5	=  -1
    std::cout << "3.5 * 4.5\t=  " << tab['*'](3.5, 4.5) << "\n";  //3.5 * 4.5	=  15.75
    std::cout << "3.5 / 4.5\t=  " << tab['/'](3.5, 4.5) << "\n";  //3.5 / 4.5	=  0.777778


    //utility
    std::vector<int> myBigVec(1000000, 2011);
    std::vector<int> myvec;

    myvec = myBigVec;
    myvec = std::move(myBigVec);

    std::string str1 = "abcd";
    std::string str2 = "efgh";
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << "\n\n";

    // Copying
    str2 = str1;             // copy semantic
    std::cout << "After copying" << std::endl;
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << "\n\n";

    str1 = "abcd";
    str2 = "efgh";

    // Moving
    str2 = std::move(str1);
    std::cout << "After moving" << std::endl;
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << "\n\n";

    
    //algorithm
    cout << "std::min(2011, 2014):\t\t\t ";
    cout << std::min(2011, 2014) << "\n";                           // 2011

    cout << "std::min({3, 1, 2011, 2014, -5}):\t";
    cout << std::min({ 3, 1, 2011, 2014, -5 }) << "\n";               // -5

    cout << "std::min(-10, -5, [](...) {...}):\t\t";
    cout << std::min(-10, -5, [](int a, int b)
        { return std::abs(a) < std::abs(b); }) << "\n\n"; // -5

    std::pair<int, int> pairInt = std::minmax(2011, 2014);
    auto pairSeq = std::minmax({ 3, 1, 2011, 2014, -5 });
    auto pairAbs = std::minmax({ 3, 1, 2011, 2014, -5 }, [](int a, int b)
        { return std::abs(a) < std::abs(b); });

    cout << "pairInt.first, pairInt.second:\t\t";
    cout << pairInt.first << ", " << pairInt.second << "\n"; // 2011,2014

    cout << "pairSeq.first, pairSeq.second:\t\t";
    cout << pairSeq.first << ", " << pairSeq.second << "\n";  // -5,2014

    cout << "pairAbs.first, pairAbs.second:\t\t ";
    cout << pairAbs.first << ", " << pairAbs.second << "\n";  // 1,2014

    return 0;
}