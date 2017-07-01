#include <StackClass.hpp>

Stack::Stack() {}

Stack::~Stack() {}

Stack::Stack(int size) {
	stackPtr = new char(size);	
	stackSize = size;
	lookupTable = new void*[1000];
	memoryCache = new void*[10];
}

void	Stack::dump() {
	int a = 0;
	for (int i = 0; i < stackSize; i++) {
		if ((i % 64) == 0) {
		lookupTable[a++] = &(stackPtr[i]);
		}
	}
	delete stackPtr;
	for (int i = 0; i < 4; i++) {
		std::cout
			<< "index "
			<< i
			<< ": "
			<< lookupTable[i]
			<< std::endl
			;
	}
	int *temp = static_cast<int*>(lookupTable[0]);
	*temp = 5;
	std::cout
		<< "table at 0: "
		<< lookupTable[0]
		<< std::endl
		<< "address of temp: "
		<< temp
		<< std::endl
		<< "value of temp: "
		<< *temp
		<< std::endl
		;
}
