#include "Data.hpp"

Data::Data() {
	data = 0;
}

Data::Data(int data) {
	this->data = data;
}

Data::Data(const Data &obj) {
	if (this != &obj)
		data = obj.data;
}

Data::~Data() {}

Data &Data::operator=(const Data &obj) {
	if (this != &obj)
		data = obj.data;
	return *this;
}

int	Data::GetData() {
	return this->data;
}