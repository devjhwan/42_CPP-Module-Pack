#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>

int main(void) {
	Data *ptr = new Data();
	uintptr_t raw;

	raw = Serializer::serialize(ptr);
	std::cout << raw << " --> 0x" << Serializer::ptrToHex(raw) << std::endl;
	Data *new_ptr = Serializer::deserialize(raw);
	std::cout << new_ptr << std::endl;
}