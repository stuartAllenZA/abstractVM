#include <LexerClass.hpp>

Lexer::Lexer() {}

Lexer::~Lexer() {}

// GETTERS

void	Lexer::getSymbols() const {
	std::cout
		<< "Symbols found"
		<< std::endl
		;
}

// SETTERS

void	Lexer::setSymbols() {}

// METHODS

void	Lexer::shell() {
	std::string	line;
	for (;;)
		std::getline(std::cin, line);
}

void	Lexer::read(char *file) {
	std::cout
		<< "filename: "
		<< file
		<< std::endl
		;
	std::ifstream	fileContents(file);
	std::cout
		<< fileContents
		<< std::endl
		;
}

