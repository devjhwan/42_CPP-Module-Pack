#include "Span.hpp"
#include <climits>
#include <cmath>

Span::Span(): _maxSize(0) {}
Span::Span(unsigned int n): _maxSize(n) {}
Span::Span(const Span &obj): _vec(obj._vec), _maxSize(obj._maxSize) {}
Span::~Span() {}

Span &Span::operator=(const Span &obj) {
	if (this != &obj) {
		this->_vec = obj._vec;
		this->_maxSize = obj._maxSize;
	}
	return *this;
}

void Span::addNumber(int value) {
	if (this->_vec.size() == this->_maxSize)
		throw FullSpanException();
	this->_vec.push_back(value);
}

int Span::shortestSpan(void) {
	if (this->_vec.size() < 2)
		throw NotEnoughElements();

	std::vector<int>::iterator nextitr = this->_vec.begin();
	std::vector<int>::iterator itr = nextitr++;
	int minSpan = INT_MAX;
	int tmp;

	while (nextitr != this->_vec.end()) {
		tmp = std::abs(*nextitr - *itr);
		if (tmp < minSpan)
			minSpan = tmp;
		itr = nextitr++;
	}
	return minSpan;
}

int Span::longestSpan(void) {
	if (this->_vec.size() < 2)
		throw NotEnoughElements();

	std::vector<int>::iterator nextitr = this->_vec.begin();
	std::vector<int>::iterator itr = nextitr++;
	int maxSpan = INT_MIN;
	int tmp;

	while (nextitr != this->_vec.end()) {
		tmp = std::abs(*nextitr - *itr);
		if (tmp > maxSpan)
			maxSpan = tmp;
		itr = nextitr++;
	}
	return maxSpan;
}

long unsigned int Span::getMaxSize(void) const {
	return this->_maxSize;
}

long unsigned int Span::getSize(void) const {
	return this->_vec.size();
}

std::vector<int> Span::getVector(void) const {
	return this->_vec;
}

std::ostream	&operator<<(std::ostream &os, const Span &obj)
{
	os << "Max element size = " << obj.getMaxSize() << std::endl;
	os << "Current size = " << obj.getSize() << std::endl;
	os << '[';
	std::vector<int> vec = obj.getVector();
	std::vector<int>::iterator itr = vec.begin();
	std::vector<int>::iterator end = vec.end() - 1;
	while (itr != end)
		os << *(itr++) << ", ";
	os << *itr << ']' << std::endl;
	return (os);
}