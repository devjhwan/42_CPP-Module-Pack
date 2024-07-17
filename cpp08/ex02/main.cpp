#include "MutantStack.hpp"
#include <iostream>
#include <stack>

int main()
{
	MutantStack<int> mstack;
	std::cout << "mstack.empty() = " << (mstack.empty() ? "true" : "false") << std::endl;
	std::cout << std::endl;

	std::cout << "mstack.push(5)" << std::endl;
	mstack.push(5);
	std::cout << "mstack.top() = " << mstack.top() << std::endl;
	std::cout << "mstack.empty() = " << (mstack.empty() ? "true" : "false") << std::endl;
	std::cout << std::endl;

	std::cout << "mstack.push(17)" << std::endl;
	mstack.push(17);
	std::cout << "mstack.top() = " << mstack.top() << std::endl;
	std::cout << "mstack.size() = " << mstack.size() << std::endl;
	std::cout << std::endl;

	std::cout << "mstack.pop()" << std::endl;
	mstack.pop();
	std::cout << "mstack.top() = " << mstack.top() << std::endl;
	std::cout << "mstack.size() = " << mstack.size() << std::endl;
	std::cout << std::endl;

	std::cout << "mstack.push(3)" << std::endl;
	std::cout << "mstack.push(5)" << std::endl;
	std::cout << "mstack.push(737)" << std::endl;
	std::cout << "mstack.push(0)" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	std::cout << "mstack.size() = " << mstack.size() << std::endl;
	std::cout << std::endl;

	std::cout << "iterating over the MutantStack" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end() - 1;
	++it;
	--it;
	std::cout << '[';
	while (it != ite)
	std::cout << *(it++) << ", ";
	std::cout << *it << ']' << std::endl;
	std::cout << std::endl;

	std::cout << "std::stack<int> s(mstack);" << std::endl;
	std::stack<int> s(mstack);
	std::cout << "s.top() = " << s.top() << std::endl;
	std::cout << "s.empty() = " << (s.empty() ? "true" : "false") << std::endl;
	std::cout << "s.size() = " << s.size() << std::endl;
	return 0;
}