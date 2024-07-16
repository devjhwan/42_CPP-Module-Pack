#include <cstdlib>

/*
The first parameter is the address of an array.
The second one is the length of the array.
The third one is a function that will be call on every element of the array.
*/

template <typename T>
void	iter(T *ptr, size_t size, void (*func)(const T&)) {
	for (size_t i = 0; i < size; i++)
		func(ptr[i]);
}