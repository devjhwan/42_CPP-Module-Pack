#pragma once

#include <vector>
#include <exception>
#include <ostream>
#include <iterator>

class Span {
	public:
		Span();
		Span(unsigned int n);
		Span(unsigned int n, int val);
		Span(const Span &obj);
		~Span();
		template <typename InputIterator>
		Span(InputIterator first, InputIterator last) {
			while (first != last)
				this->_vec.push_back(*(first++));
			this->_maxSize = this->_vec.size();
		}
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