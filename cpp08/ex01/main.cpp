#include "Span.hpp"
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

void	fillSpanWithRandom(Span &span) {
	long unsigned int maxSize = span.getMaxSize();

	for (long unsigned int i = 0; i < maxSize; i++)
		span.addNumber(std::rand());
}

void	fillSpanWithRandom(Span &span, int maxNumberValue) {
	long unsigned int maxSize = span.getMaxSize();

	for (long unsigned int i = 0; i < maxSize; i++)
		span.addNumber(std::rand() % maxNumberValue);
}

int main(void) {
	{
		std::cout << "Test exceptions" << std::endl;

		try {
			Span span(3);
			span.addNumber(1);
			span.addNumber(1);
			span.addNumber(1);
			span.addNumber(1);
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			Span span;
			std::cout << span.shortestSpan() << std::endl;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			Span span;
			std::cout << span.longestSpan() << std::endl;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			Span span(2);
			span.addNumber(1);
			std::cout << span.shortestSpan() << std::endl;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			Span span(2);
			span.addNumber(1);
			std::cout << span.longestSpan() << std::endl;
		} catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "Main tests" << std::endl;
		std::cout << "Preparing random seed" << std::endl;
		std::cout << std::endl;
		std::srand(static_cast<unsigned int>(std::time(NULL)));
		{
			std::cout << "Test with low size vector (10)" << std::endl;
			Span span(10);
			fillSpanWithRandom(span, 30);
			std::cout << span << std::endl;
			std::cout << "shortest span = " << span.shortestSpan() << std::endl;
			std::cout << "longest span = " << span.longestSpan() << std::endl;
		}
		{
			std::cout << "Test with middle size vector (10000)" << std::endl;
			Span span(10000);
			fillSpanWithRandom(span, 500000000);
			std::cout << "shortest span = " << span.shortestSpan() << std::endl;
			std::cout << "longest span = " << span.longestSpan() << std::endl;
		}
		{
			std::cout << "Test with large size vector (1e8)" << std::endl;
			Span span(100000000);
			fillSpanWithRandom(span);
			std::cout << "shortest span = " << span.shortestSpan() << std::endl;
			std::cout << "longest span = " << span.longestSpan() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		std::cout << "Test constructor with range iterator" << std::endl;
		int arr[] = {1, 2, 3, 4, 5};
    	size_t size = sizeof(arr) / sizeof(arr[0]);
		Span span(arr, arr + size);
		std::cout << span << std::endl;
	}
}