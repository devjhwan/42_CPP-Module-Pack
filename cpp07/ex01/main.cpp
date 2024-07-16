#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void	print(const T &val) {
	std::cout << val;
}

int main(void) {
	{
		std::cout << "Testing with integer array" << std::endl;

		int arr[5] = {1, 2, 3, 4, 5};
		::iter<int>(arr, 5, print);
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Testing with char array" << std::endl;

		char arr[5] = {'a', 'b', 'c', 'd', 'e'};
		::iter<char>(arr, 5, print);
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Testing with string array" << std::endl;

		std::string arr[3] = {"hol", "a buen", "os dias"};
		::iter<std::string>(arr, 3, print);
		std::cout << std::endl;
		std::cout << std::endl;
	}
}