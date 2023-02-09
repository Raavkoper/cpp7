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
	Array(unsigned int new_size): size(new_size), array(new T[size]) {};
	Array(const Array &other) {
		size = other.size;
		array = new T[size];
		for (int i = 0; i < size; i++)
			array[i] = other.array[i];
	}

	Array &operator=(const Array &other) {
		size = other.size;
		delete[] array;
		array = new T[size];
		for (int i = 0; i < size; i++)
			array[i] = other.array[i];
		
		return *this;
	}

	T &operator[](unsigned int index) {
		if (index >= size) throw std::out_of_range("Index out of range");
		else return (array[index]);
	}

	unsigned int getSize() { return size; }

	void printArray() {
		for (int i = 0; i < size; i++) {
			std::cout << array[i] << std::endl;
		}
	}

	~Array() {
		delete[] array;
	}
};

#endif