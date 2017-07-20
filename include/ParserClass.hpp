#include <iostream>
#include <list>
#include <string>
#include "LexerClass.hpp"
#include <TokenClass.hpp>

class Parser {
	public:
		Parser(std::list<std::string>, std::list<std::string>);

	private:
		std::list<Token> stack;


};

