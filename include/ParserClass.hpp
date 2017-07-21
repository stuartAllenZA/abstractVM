#include <iostream>
#include <list>
#include <string>
#include "LexerClass.hpp"
#include <TokenClass.hpp>

class Parser {
	public:
		Parser(std::list<std::string>, std::list<std::string>);
		void	push();
		void	pop();
		void	add();
		void	sub();
		void	mul();
		void	div();
		void	mod();
		void	dump();
		void	print();
		void	exit();
		void	terminate();

	private:
//		std::list<Token> _stack;
};

