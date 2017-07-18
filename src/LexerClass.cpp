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
	while (line != ";;") { 
		std::getline(std::cin, line);
		formatString(line);
	}
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
			formatString(line);
		}
	fileHandle.close();
	}
}

void	Lexer::formatString(std::string str) {
	std::string buf; // Have a buffer string
	std::stringstream ss(str); // Insert the string into a stream

	std::vector<std::string> tokens; // Create vector to hold our words

	while (ss >> buf)
		tokens.push_back(buf);
	try {
		if (tokens.size() == 2) {
			symLookup(tokens[0]);
			parse(tokens[1]);
		}
		else if (tokens.size() == 1)
			symLookup(str);
		else throw std::exception();
	} catch (std::exception *e) {
		std::cerr
			<< e->what()
			<< std::endl
			;
	}
}

void	Lexer::symLookup(std::string symbol) {
	try {
		if (symbol == "push") {
			std::cout
				<< symbol
				<< std::endl
				;
			parseSymbol(0);
		}
		else if (symbol == "pop")
			parseSymbol(1);
		else if (symbol == "dump")
			parseSymbol(2);
		else if (symbol == "assert")
			parseSymbol(3);
		else if (symbol == "add")
			parseSymbol(4);
		else if (symbol == "sub")
			parseSymbol(5);
		else if (symbol == "mul")
			parseSymbol(6);
		else if (symbol == "div")
			parseSymbol(7);
		else if (symbol == "mod")
			parseSymbol(8);
		else if (symbol == "print")
			parseSymbol(9);
		else if (symbol == "exit")
			parseSymbol(10);
		else if (symbol == ";;")
			parseSymbol(11);
		else throw std::exception();
	} catch (std::exception *e) {
		std::cerr
			<< e->what()
			<< std::endl
			;
	} 
}

void	Lexer::parseSymbol(int i) {
	std::cout
		<< "recieved symbol: "
		<< i
		<< std::endl
		;
}

void	Lexer::parse(std::string i) {
	std::cout
		<< "recieved value: "
		<< i
		<< std::endl
		;
}
