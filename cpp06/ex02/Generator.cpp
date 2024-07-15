#include "Generator.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base * Generator::generate(void) {
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	int rand = std::rand() % 3;
	if (rand == 0)
		return (new A());
	else if (rand == 1)
		return (new B());
	else
		return (new C());
}

void	Generator::identify(Base *p) {
	std::cout << "Identifying with pointer" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "Given class is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Given class is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Given class is C" << std::endl;
}

void	Generator::identify(Base &p) {
	std::cout << "Identifying without pointer" << std::endl;
	try {
		dynamic_cast<A&>(p);
		std::cout << "Given class is A" << std::endl;
	} catch (std::exception &e) {
		(void) e;
	}
	try {
		dynamic_cast<B&>(p);
		std::cout << "Given class is B" << std::endl;
	} catch (std::exception &e) {
		(void) e;
	}
	try {
		dynamic_cast<C&>(p);
		std::cout << "Given class is C" << std::endl;
	} catch (std::exception &e) {
		(void) e;
	}
}
