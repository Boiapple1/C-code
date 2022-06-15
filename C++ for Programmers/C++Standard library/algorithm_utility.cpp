// minMax.cpp
#include <iostream>
#include <algorithm>
#include <utility>
//...
using std::cout;
//...

class MyData {
    MyData(MyData&& m) = default; // move constructor
    MyData& operator = (MyData&& m) = default; // move assignment 
    MyData(const MyData& m) = default; // copy constructor
    MyData& operator = (const myData& m) = default; // copy assignment
};

int main() {

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