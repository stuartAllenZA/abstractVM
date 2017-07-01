#ifndef INCLUDE_LEXER_CLASS_HPP_
#define INCLUDE_LEXER_CLASS_HPP_

#include <iostream>
#include <string>
#include <fstream>

class Lexer {
	private:

	public:
		Lexer();
		~Lexer();

		// GETTERS

		void	getSymbols() const;
		
		// SETTERS

		void	setSymbols();

		// METHODS

		void	shell( void );
		void	read( char * );
};

#endif

