#include "Array.hpp"

int main() {
	Array<int> a(10);
	
	for (int i = 0; i < 10; i++) {
		a[i] = i;
	}

	Array<int> b(a);

	b.printArray();

	std::cout << std::endl;
	std::cout << b.getSize() << std::endl;
	std::cout << std::endl;

	try {
		std::cout << b[15] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}