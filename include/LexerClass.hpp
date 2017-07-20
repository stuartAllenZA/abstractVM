#ifndef INCLUDE_LEXER_CLASS_HPP_
#define INCLUDE_LEXER_CLASS_HPP_

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <regex>
#include "Exceptions.hpp"

enum TYPES {
	INT8,
	INT16,
	INT32,
	FLOAT,
	DOUBLE
};

union VALUES {
	char	INT8;
	short	INT16;
	int		INT32;
	float	FLOAT;
	double	DOUBLE;
};

class Lexer {
	public:
		Lexer(int, char**);
		std::vector<std::string>	getTokens();

	private:
		void						_readFileContentsToTokens(char*);
		void						_launchShell();
		void						_lexicalAnalysis(std::string);
		bool						_isValidOperation(std::string);
		bool						_isValidLiteral(std::string, std::string);

		std::vector<std::string>	_tokenOperations;
		std::vector<std::string>	_tokenLiterals;
		std::string					_line;
		int							_n;
};

#endif

