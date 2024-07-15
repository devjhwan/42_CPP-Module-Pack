#include "ScalarConverter.hpp"
#include <iostream>
#include <cctype>
#include <climits>
#include <cstring>
#include <cmath>
#include <string>

void ScalarConverter::Convert(const char *input) {
	ToChar(input);
	ToInt(input);
	ToFloat(input);
	ToDouble(input);
}

/*
One character,
Number
*/
void ScalarConverter::ToChar(const char *input) {
	int	i = 0;

	std::cout << "char: ";
	if (!isdigit(input[i])) {
		if (input[i + 1] != '\0')
			std::cout << "impossible" << std::endl;
		else
			std::cout << input[i] << std::endl;
	}
	else {
		int num = 0;

		while (isdigit(input[i]) && num < 128)
			num = num * 10 + input[i++] - '0';
		if (input[i] != '\0' || num >= 128)
			std::cout << "impossible" << std::endl;
		else if (!isprint(num))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << '\"' << (char)num << '\"' << std::endl;
	}
}

void ScalarConverter::ToInt(const char *input) {
	int i = 0;
	long long int num = 0;
	int sign = 1;

	std::cout << "int: ";
	if (input[i] == '+' || input[i] == '-') {
		if (input[i] == '-')
			sign = -1;
		i++;
	}
	while (isdigit(input[i]) && num <= INT_MAX)
		num = num * 10 + input[i++] - '0';
	num *= sign;
	if ((input[i] != '\0') || (num < INT_MIN || num > INT_MAX))
		std::cout << "impossible" << std::endl;
	else
		std::cout << input << std::endl;
}

void ScalarConverter::ToFloat(const char *input) {
	int i = 0;
	float num = 0;
	int sign = 1;
	int check;

	std::cout << "float: ";
	if (strncmp(input, "nan", 4) == 0 || strncmp(input, "nanf", 5) == 0) {
		std::cout << "nanf" << std::endl;
		return ;
	}
	check = CheckDecimalFormat(input);
	if (check == 0)
		std::cout << "impossible" << std::endl;
	else {
		if (input[i] == '+' || input[i] == '-') {
			if (input[i] == '-')
				sign = -1;
			i++;
		}
		while (isdigit(input[i]) && !isinff(num))
			num = num * 10 + input[i++] - '0';
		if (isinff(num)) {
			if (sign == 1)
				std::cout << "+inff" << std::endl;
			else
				std::cout << "-inff" << std::endl;
		} else if (check == 1) {
			std::cout << input << ".0f" << std::endl;
		} else if (check == 2) {
			std::string buffer = "";
			i = 0;
			while (input[i] != 'f')
				buffer += input[i++];
			std::cout << buffer << ".0f" << std::endl;
		} else if (check == 3) {
			std::cout << input << 'f' << std::endl;
		} else {
			std::cout << input << std::endl;
		}
	}
}

void ScalarConverter::ToDouble(const char *input) {
	int i = 0;
	double num = 0;
	int sign = 1;
	int check;

	std::cout << "double: ";
	if (strncmp(input, "nan", 4) == 0 || strncmp(input, "nanf", 5) == 0) {
		std::cout << "nan" << std::endl;
		return ;
	}
	check = CheckDecimalFormat(input);
	if (check == 0)
		std::cout << "impossible" << std::endl;
	else {
		if (input[i] == '+' || input[i] == '-') {
			if (input[i] == '-')
				sign = -1;
			i++;
		}
		while (isdigit(input[i]) && !std::isinf(num))
			num = num * 10 + input[i++] - '0';
		if (std::isinf(num)) {
			if (sign == 1)
				std::cout << "+inf" << std::endl;
			else
				std::cout << "-inf" << std::endl;
		} else if (check == 1) {
			std::cout << input << ".0" << std::endl;
		} else if (check == 2) {
			std::string buffer = "";
			i = 0;
			while (input[i] != 'f')
				buffer += input[i++];
			std::cout << buffer << ".0" << std::endl;
		} else if (check == 3) {
			std::cout << input << std::endl;
		} else {
			std::string buffer = "";
			i = 0;
			while (input[i] != 'f')
				buffer += input[i++];
			std::cout << buffer << std::endl;
		}
	}
}

/*
	if returns 0 means given input is not decimal notation.
	return 1 means given input correspond to int without f at last char
	return 2 means given input correspond to int with f at last char
	return 2 means given input correspond to double
	return 3 means given input correspond to float
*/
int ScalarConverter::CheckDecimalFormat(const char *input) {
	int i = 0;

	if (input[i] == '+' || input[i] == '-')
		i++;
	while (isdigit(input[i]))
		i++;
	if (input[i] == '\0')
		return 1;
	if (input[i] == 'f' && input[i + 1] == '\0')
		return 2;
	else if (input[i] == '.') {
		i++;
		while (isdigit(input[i]))
			i++;
		if (input[i] == '\0')
			return 3;
		else if (input[i] == 'f' && input[i + 1] == '\0')
			return 4;
	}
	return 0;
}