#include "Serializer.hpp"
#include <string>
#include <sstream>

uintptr_t	Serializer::serialize(Data *ptr) {
	return (uintptr_t)(ptr);
}

Data *		Serializer::deserialize(uintptr_t raw) {
	return (Data *)(raw);
}

std::string Serializer::ptrToHex(uintptr_t num) {
    std::stringstream stream;
    stream << std::hex << num;
    return stream.str();
}