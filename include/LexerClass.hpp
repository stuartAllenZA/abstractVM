#ifndef INCLUDE_LEXER_CLASS_HPP_
#define INCLUDE_LEXER_CLASS_HPP_

#include <iostream>
#include <list>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <regex>
#include "Exceptions.hpp"
#include <iterator>

class Lexer {
	public:
		Lexer(int, char**);
		std::list<std::string>	getTokensOperations();
		std::list<std::string>	getTokensLiterals();
		std::list<std::string>	getTokensLiteralsTypes();

	private:
		void					_readFileContentsToTokens(char*);
		void					_launchShell();
		void					_lexicalAnalysis(std::string);
		bool					_isValidOperation(std::string);
		bool					_isValidLiteral(std::string, std::string);
		std::string				_getLiteral(std::string);
		std::string				_getLiteralType(std::string);

		std::list<std::string>	_tokenOperations;
		std::list<std::string>	_tokenLiterals;
		std::list<std::string>	_tokenLiteralsTypes;
		std::string				_line;
		int						_n;
};

#endif

