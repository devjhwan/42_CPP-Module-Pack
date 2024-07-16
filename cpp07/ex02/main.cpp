#include "Array.hpp"
#include <iostream>

template <typename T>
void	printArr(Array<T> arr) {
	int size = arr.size();

	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

int main(void) {
	{
		std::cout << "Constructor Testing" << std::endl;

		Array<int> arr1;
		std::cout << "Default constructor (Array<int> arr1)" << std::endl;
		std::cout << "size of arr1 = " << arr1.size() << std::endl;

		Array<int> arr2(5);
		std::cout << "Constructor with parameter (Array<int> arr2(5))" << std::endl;
		std::cout << "size of arr2 = " << arr2.size() << std::endl;

		Array<int> arr3(arr2);
		std::cout << "Copy constructor (Array<int> arr3(arr2))" << std::endl;
		std::cout << "size of arr3 = " << arr3.size() << std::endl;

		Array<int> arr4 = arr1;
		std::cout << "Copy assigment constructor (Array<int> arr4 = arr1)" << std::endl;
		std::cout << "size of arr4 = " << arr4.size() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Exception Testing" << std::endl;

		Array<int> arr(3);
		
	}
	{
		std::cout << "Testing with integer values" << std::endl;

		Array<int> arr(5);
		for (int i = 0; i < arr.size(); i++)
			arr[i] = i + 1;
		printArr<int>(arr);
	}
	{
		std::cout << "Testing with char values" << std::endl;

		Array<char> arr(7);
		for (int i = 0; i < arr.size(); i++)
			arr[i] = 'a' + i;
		printArr<char>(arr);
	}
	{
		std::cout << "Testing with double values" << std::endl;

		Array<double> arr(3);
		for (int i = 0; i < arr.size(); i++)
			arr[i] = 3.1415 * i;
		printArr<double>(arr);
	}
}