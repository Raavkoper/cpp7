#ifndef ARRAY_H
#define ARRAY_H

#include "iostream"

template<typename T>
class Array {
private:
	unsigned int size;
	T *array;

public:
	Array(): size(0),  array(0) {};
	Array(unsigned int new_size): size(new_size) {};
	Array(const Array &other) {
		size = other.size();
	}
	Array &operator=(const Array &other) {
		*this = other;
	}
};

#endif