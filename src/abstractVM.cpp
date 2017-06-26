#include <iostream>
#include <sstream>
#include <vector>

int	main() {
	std::vector<char> *ptr = new std::vector<char>(64000);
	for (int i =0; i < 64000; i++) {
		std::cout
			<< i + 1
			<< ": "
			<< &ptr[i]
			<< std::endl
			;
	}
}
