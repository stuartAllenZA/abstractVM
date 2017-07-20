#include <ParserClass.hpp>

Parser::Parser(std::list<std::string> tokenOperations, std::list<std::string> tokenLiterals) {
	std::list<std::string>::const_iterator literalStart = tokenLiterals.begin();
	for (std::list<std::string>::const_iterator start = tokenOperations.begin(); start != tokenOperations.end(); start++) {
		if (*start == "push" || *start == "assert") {
			std::cout
				<< *literalStart
				<< std::endl
				;
			literalStart++;
		}
	}
}

