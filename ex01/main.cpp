#include "iter.hpp"

int main(void) {
    int intarray[10] = {3, 6346, 3432, 64, 123, 1235, 3462, 76, 7946, 68};
	std::string stringarray[4] = {"what's", "poppin", "my", "guy"};

	::iter(intarray, 10, print_element);
	::iter(stringarray, 4, print_element);
}