#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T>
void print_element(const T element) {
	std::cout << element << std::endl;
}

template<typename T>
void iter(T array[], size_t length, void (*func)(const T&)) {
    for (int i = 0; i < length; i++)
        func(array[i]);
}

#endif