#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T>
void iter(T array[], size_t length, const void (*func)(T&)) {
    for (int i = 0; i < length; i++)
        func(array[i]);
}

#endif