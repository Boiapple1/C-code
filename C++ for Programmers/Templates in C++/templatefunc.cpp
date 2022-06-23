#include <typename T>
T maxof(T a, T b) {
	return (a > b ? a : b);

}
int main() {
	std::cout << maxof<int>(7, 9) << std::endl;
	std::cout << maxof(90, 99) << std::endl;
	std::cout << maxof<const char*>("bbb", "aaa") << std::endl;
	return 0;
}