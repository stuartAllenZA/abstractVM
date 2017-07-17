#include <LexerClass.hpp>

Lexer::Lexer() {
	std::cout
		<< "lexer::lexer"
		<< std::endl
		;
}

Lexer::~Lexer() {
	std::cout
		<< "lexer::~lexer"
		<< std::endl
		;
}

// GETTERS

void	Lexer::getSymbols() const {
	std::cout
		<< "lexer::getSymbols"
		<< std::endl
		;
}

// SETTERS

void	Lexer::setSymbols() {
	std::cout
		<< "lexer::setSymbols"
		<< std::endl
		;
}

// METHODS

void	Lexer::shell() {
	std::cout
		<< "lexer::shell"
		<< std::endl
		;
	std::string	line;
	while (line != ";;") 
		std::getline(std::cin, line);
}

void	Lexer::read(char *file) {
	std::cout
		<< "lexer::read"
		<< std::endl
		;
	std::ifstream	fileHandle(file);
	if (fileHandle.is_open())
	{
		std::string line;
		while (std::getline (fileHandle,line)) {
			std::cout << line << '\n';
		}
	fileHandle.close();
	}
}

