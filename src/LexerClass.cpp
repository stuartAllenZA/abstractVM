#include <LexerClass.hpp>

Lexer::Lexer(int ac, char **av) {
	if (ac > 2)
		throw Exceptions::ParameterCountException();
	else {
		std::cout
			<< "Param 1: "
			<< av[0]
			<< std::endl
			;
	}
}

void	Lexer::say() {
	std::cout << "LEXER\n";
}
