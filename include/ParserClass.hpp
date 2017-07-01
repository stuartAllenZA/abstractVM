#ifndef INCLUDE_PARSER_CLASS_HPP_
#define INCLUDE_PARSER_CLASS_HPP_

#include "LexerClass.hpp"

class Parser {
	private:

	public:
		Parser();
		~Parser();
		void	process( const Lexer& );
};

#endif

