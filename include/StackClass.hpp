#ifndef INCLUDE_STACK_CLASS_HPP_
#define INCLUDE_STACK_CLASS_HPP_

#include <iostream>

class Stack {
	private:
		void	**memoryCache;
		void	**lookupTable;
		//int		blockIndex;
		char	*stackPtr;
		int		stackSize;

	public:
		Stack();
		~Stack();
		Stack(int);
		void	dump();
};

#endif

