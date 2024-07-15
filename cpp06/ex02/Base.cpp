#include "Base.hpp"
#include <iostream>

Base::~Base() {
	std::cout << "Destroy Base" << std::endl;
}

A::A() {
	std::cout << "Create A" << std::endl;
}

A::~A() {
	std::cout << "Destroy A" << std::endl;
}

B::B() {
	std::cout << "Create B" << std::endl;
}

B::~B() {
	std::cout << "Destroy B" << std::endl;
}

C::C() {
	std::cout << "Create C" << std::endl;
}

C::~C() {
	std::cout << "Destroy C" << std::endl;
}