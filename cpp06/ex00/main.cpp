#include "ScalarConverter.hpp"
#include <iostream>

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "./convert [arg]" << std::endl;
		return 0;
	}
	ScalarConverter::Convert(argv[1]);
}