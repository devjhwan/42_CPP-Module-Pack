#include "Functions.hpp"
#include <iostream>
#include <string>

template <typename T>
void	print_values(T &a, T &b) {
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
}

int main(void) {
	{
		std::cout << "Integer testing" << std::endl;
		std::cout << std::endl;

		int a = 2;
		int b = 3;

		std::cout << "Initial values:" << std::endl;
		print_values(a, b);
		std::cout << std::endl;

		Functions<int>::swap(a, b);
		std::cout << "Values after swap:" << std::endl;
		print_values(a, b);
		std::cout << std::endl;

		int min = Functions<int>::min(a, b);
		std::cout << "Min value:" << std::endl;
		std::cout << "min = " << min << std::endl;
		std::cout << std::endl;

		int max = Functions<int>::max(a, b);
		std::cout << "Max value:" << std::endl;
		std::cout << "max = " << max << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "String testing" << std::endl;
		std::cout << std::endl;

		std::string a = "abcd";
		std::string b = "qwer";

		std::cout << "Initial values:" << std::endl;
		print_values(a, b);
		std::cout << std::endl;

		Functions<std::string>::swap(a, b);
		std::cout << "Values after swap:" << std::endl;
		print_values(a, b);
		std::cout << std::endl;

		std::string min = Functions<std::string>::min(a, b);
		std::cout << "Min value:" << std::endl;
		std::cout << "min = " << min << std::endl;
		std::cout << std::endl;

		std::string max = Functions<std::string>::max(a, b);
		std::cout << "Max value:" << std::endl;
		std::cout << "max = " << max << std::endl;
		std::cout << std::endl;
	}
}