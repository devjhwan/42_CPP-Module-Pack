#pragma once
#include <stdexcept>

template <typename T>
class Array {
	public:
		Array() : _array(NULL), _size(0) {}
		Array(unsigned int n) : _size(n) {
			this->_array = new T[n];
		}
		Array(const Array &obj) : _size(obj._size) {
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_size; ++i)
				this->_array[i] = obj._array[i];
		}
		~Array() {
			delete[] (_array);
		}
		Array	&operator=(const Array &obj) {
			if (this != &obj) {
            delete[] (this->_array);

            this->_size = obj._size;
            this->_array = new T[this->_size];
            for (int i = 0; i < this->_size; ++i)
                this->_array[i] = obj._array[i];
        }
        return *this;
		}
		T&	operator[](int idx) {
			if (idx < 0 || idx >= this->_size)
				std::out_of_range("Index out of bounds");
			return this->_array[idx];
		}
		int	size() const {
			return this->_size;
		}
	private:
		T*	_array;
		int	_size;
};