#include "Functions.hpp"
#include <iostream>
#include <string>

template <typename T>
void testing(T &a, T &b) {
	std::cout << "Initial values:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
	std::cout << std::endl;

	::swap<T>(a, b);
	std::cout << "Values after swap:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
	std::cout << std::endl;

	T _min = ::min<T>(a, b);
	std::cout << "Min value:" << std::endl;
	std::cout << "min = " << _min << std::endl;
	std::cout << std::endl;

	T _max = ::max<T>(a, b);
	std::cout << "Max value:" << std::endl;
	std::cout << "max = " << _max << std::endl;
	std::cout << std::endl;
}

int main() {
    {
        std::cout << "Integer testing" << std::endl;
        std::cout << std::endl;

        int a = 2;
        int b = 3;
        testing<int>(a, b);
    }
    {
        std::cout << "String testing" << std::endl;
        std::cout << std::endl;

        std::string a = "abcd";
        std::string b = "qwer";
		testing <std::string>(a, b);
    }

    return 0;
}
