#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void) {
	std::vector<int> vec(5);
	for (int i = 0; i < 5; i++)
		vec.at(i) = i + 1;
	std::vector<int>::iterator result = ::easyfind< std::vector<int> >(vec, 3);
	if (result != vec.end())
		std::cout << "result = " << *result << std::endl;
	else
		std::cout << "Value not found" << std::endl;
}