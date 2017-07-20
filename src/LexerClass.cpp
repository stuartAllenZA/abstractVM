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

std::vector<std::string>		Lexer::getTokens() {
	return _tokenOperations;
}

void							Lexer::_readFileContentsToTokens(char *fileName) {
	std::ifstream fileHandle(fileName);
	_n = 0;
	try {
		if (fileHandle.is_open()) {
			while (std::getline(fileHandle, _line)) {
				if (_line.substr(0,1) == ";" && _line.substr(1,1) != ";")
					continue;
				else {
					_lexicalAnalysis(_line);
					_n++;
				}
			}
		}

		else throw Exceptions::FileException();

		try {
			if (_tokenOperations[_n - 1] != ";;" || _tokenOperations[_n - 2] != "exit")
				throw Exceptions::MissingTerminatorException();
		} catch (Exceptions::MissingTerminatorException const &) { throw; }

	}

	catch (Exceptions::FileFormatException const &) { throw; }

	catch (Exceptions::FileException const &) { throw; }
}

void							Lexer::_lexicalAnalysis(std::string line) {
	size_t n = std::count(line.begin(), line.end(), ' ');
	if (n > 1)
		throw Exceptions::FileFormatException();
	else {

		std::istringstream	iss(line);
		std::string			operation;
		std::string			literal;

		if (iss >> operation >> literal) {
			if (_isValidLiteral(operation, literal)) {
				_tokenOperations.push_back(operation);
				_tokenLiterals.push_back(literal);
			} else throw Exceptions::FileFormatException();
		} else {
			if (_isValidOperation(operation)) {
				iss >> operation;
				_tokenOperations.push_back(operation);
			} else throw Exceptions::FileFormatException();
		}
	}
}

bool							Lexer::_isValidOperation(std::string operation) {
	if (operation == "pop" ||
			operation == "add" ||
			operation == "sub" ||
			operation == "mul" ||
			operation == "div" ||
			operation == "mod" ||
			operation == "dump" ||
			operation == "exit" ||
			operation == ";;")
		return true;
	return false;
}

bool							Lexer::_isValidLiteral(std::string operation, std::string literal) {
	std::regex regexInt8 ("int8.?\\(.?\\d+\\)");
//	std::regex regexInt16 = "int16.?\(.?\d+\)"
//	std::regex regexInt32 = "int32.?\(.?\d+\)"

	std::smatch regexInt8Match;
//	std::smatch regexInt16Match;
//	std::smatch regexInt32Match;
	if ((operation == "push" || operation == "assert") && (
				regex_match(literal, regexInt8Match, regexInt8) ||
				literal.substr(0,5) == "int16" ||
				literal.substr(0,5) == "int32" ||
				literal.substr(0,5) == "float" ||
				literal.substr(0,6) == "double")
	   )
		return true;
	return false;
}

void							Lexer::_launchShell() {
	try {
		_n = 0;
		while (std::getline(std::cin, _line)) {
			if (_line.substr(0,1) == ";" && _line.substr(1,1) != ";")
				continue;
			else if (_line.substr(0,2) == ";;") {
				_lexicalAnalysis(_line);
				_n++;
				break;
			}
			else {
				_lexicalAnalysis(_line);
				_n++;
			}
		}
		std::cout << "n: " << _n;
		for (int i = 0; i < _n; i++) {
			std::cout
				<< "token operation "
				<< i
				<< "\t"
				<< _tokenOperations[i]
				<< std::endl
				;
		}

		try {
			if (_tokenOperations[_n - 1] != ";;" || _tokenOperations[_n - 2] != "exit")
				throw Exceptions::MissingTerminatorException();
		} catch (Exceptions::MissingTerminatorException const &) { throw; }
	} catch (Exceptions::FileFormatException const &) { throw; }

}

