#ifndef INCLUDE_PARSER_CLASS_HPP_
#define INCLUDE_PARSER_CLASS_HPP_

#include "LexerClass.hpp"

class Parser {
	private:

	public:
		Parser();
		~Parser();

		// METHOD

		void	process( const Lexer& );
		void	diagnose();
};

#endif

