#pragma once

#include "Data.hpp"
#include <string>
#define uintptr_t unsigned long long int

class Serializer {
	public:
		static uintptr_t 	serialize(Data *ptr);
		static Data *		deserialize(uintptr_t raw);
		static std::string	ptrToHex(uintptr_t num);
};