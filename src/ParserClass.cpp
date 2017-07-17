#include <ParserClass.hpp>

Parser::Parser() {
	std::cout
		<< "parser::parser"
		<< std::endl
		;
}

Parser::~Parser() {
	std::cout
		<< "parser::~parser"
		<< std::endl
		;
}

void	Parser::process(const Lexer& lexer) {
	std::cout
		<< "parser::process"
		<< std::endl
		;
	lexer.getSymbols();
}
