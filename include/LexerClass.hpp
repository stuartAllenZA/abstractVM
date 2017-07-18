#ifndef INCLUDE_LEXER_CLASS_HPP_
#define INCLUDE_LEXER_CLASS_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

class Lexer {
	private:
		Vector<int>	commands;

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
		void	formatString( std::string );
		void	symLookup( std::string );
		void	parseSymbol( int );
		void	parse( std::string );
};

#endif

