#include <StackClass.hpp>

Stack::Stack() {}

Stack::~Stack() {}

Stack::Stack(int size) {
	stackPtr = new char(size);	
	stackSize = size;
	lookupTable = new void*[1000];
}

void	Stack::dump() {
//	void *temp;
	int a = 0;
/*	int count = 1;
		std::cout
			<< "stack index "
			<< a++
			<< ": "
			<< std::endl
			<< std::endl
			;*/
	for (int i = 0; i < stackSize; i++) {
//		temp = &(stackPtr[i]);
		if ((i % 64) == 0) {
	/*	std::cout
			<< std::endl
			<< "stack index "
			<< a++
			<< ": "
			<< std::endl
			<< std::endl
			;*/
		lookupTable[a++] = &(stackPtr[i]);
		}
	/*	std::cout
			<< "index "
			<< i
			<< ": "
			<< temp
			<< "\tcount: "
			<< count++
			<< std::endl
			;*/
	}
	for (int i = 0; i < 1000; i++) {
		std::cout
			<< lookupTable[i]
			<< std::endl
			;
	}
}
