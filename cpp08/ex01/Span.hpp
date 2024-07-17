#pragma once

#include <vector>
#include <exception>
#include <ostream>

class Span {
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &obj);
		~Span();
		Span &operator=(const Span &obj);
		void addNumber(int value);
		int shortestSpan(void);
		int longestSpan(void);
		long unsigned int getMaxSize(void) const;
		long unsigned int getSize(void) const;
		std::vector<int> getVector(void) const;

		class FullSpanException: public std::exception {
			public:
				const char* what() const throw() {
					return "Can't add more numbers to full span";
				}
		};
		class NotEnoughElements: public std::exception {
			public:
				const char* what() const throw() {
					return "Not enough elements to search span";
				}
		};
	private:
		std::vector<int> _vec;
		long unsigned int _maxSize;
};

std::ostream	&operator<<(std::ostream &os, const Span &obj);