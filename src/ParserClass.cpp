#include <ParserClass.hpp>

Parser::Parser() {}

Parser::~Parser() {}

void	Parser::process(const Lexer& lexer) {
	lexer.getSymbols();
}
