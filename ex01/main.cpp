#include "iter.hpp"

template<typename T>
void print_element(T element) {
	std::cout << element << std::endl;
}

int main(void) {
    int intarray[10] = {3, 6346, 3432, 64, 123, 1235, 3462, 76, 7946, 68};
	std::string stringarray[6] = {"what", "the", "fuck", "is", "up", "kyle"};

	::iter(intarray, 10, print_element);
	::iter(stringarray, 6, print_element);
}