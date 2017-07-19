#include <LexerClass.hpp>

Lexer::Lexer(int ac, char **av) {
	if (ac > 2)
		throw Exceptions::ParameterCountException();
	else if (ac == 2) {
		_readFileContentsToTokens(av[1]);
	}
	else if (ac == 1)
		_launchShell();
	else throw;
}

std::vector<std::string>		*Lexer::getTokens() {
	return &_tokens;
}

void							Lexer::_readFileContentsToTokens(char *fileName) {
	std::ifstream fileHandle(fileName);
	try {
		if (fileHandle.is_open()) {
			while (std::getline(fileHandle, _line))
				_lexicalAnalysis(_line);
		}

		else throw Exceptions::FileException();

	}

	catch (Exceptions::FileFormatException const &) { throw; }

	catch (Exceptions::FileException const &) { throw; }
}

void							Lexer::_lexicalAnalysis(std::string _line) {
	std::cout << "line:" << _line << std::endl;
	throw Exceptions::FileFormatException();
}

void							Lexer::_launchShell() {
	for(;;)
		std::getline(std::cin, _line);
}

