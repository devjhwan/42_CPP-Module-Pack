#include "Data.hpp"
#include "Serializer.hpp"
#include <iostream>

int main(void) {
	Data *ptr = new Data(42);
	uintptr_t raw;

	std::cout << "data = " << ptr->GetData() << std::endl;
	raw = Serializer::serialize(ptr);
	std::cout << raw << " --> 0x" << Serializer::ptrToHex(raw) << std::endl;
	Data *new_ptr = Serializer::deserialize(raw);
	std::cout << new_ptr << std::endl;
	std::cout << "data = " << new_ptr->GetData() << std::endl;
}