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
	//&lookupTable[0] = 'k';
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
