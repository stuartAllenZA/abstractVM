#include <ParserClass.hpp>

Parser::Parser(std::list<std::string> tokenOperations,
		std::list<std::string> tokenLiteralsTypes,
		std::list<std::string> tokenLiterals) {
	std::list<std::string>::const_iterator literalsIterator = tokenLiterals.begin();
	std::list<std::string>::const_iterator literalsTypesIterator = tokenLiteralsTypes.begin();
	for (std::list<std::string>::const_iterator  operationsIterator = tokenOperations.begin(); operationsIterator != tokenOperations.end(); operationsIterator++) {
		if (*operationsIterator == "push") {
			push(*literalsTypesIterator, *literalsIterator);
			literalsIterator++;
			literalsTypesIterator++;
		}
		else if (*operationsIterator == "assert") {
			assert(*literalsTypesIterator, *literalsIterator);
			literalsIterator++;
			literalsTypesIterator++;
		}
		else if (*operationsIterator == "pop")
			pop();
		else if (*operationsIterator == "add")
			add();
		else if (*operationsIterator == "sub")
			sub();
		else if (*operationsIterator == "mul")
			mul();
		else if (*operationsIterator == "div")
			div();
		else if (*operationsIterator == "mod")
			mod();
		else if (*operationsIterator == "dump")
			dump();
		else if (*operationsIterator == "print")
			print();
		else if (*operationsIterator == "exit")
			exit();
		else if (*operationsIterator == ";;")
			terminate();
	}
}

void  Parser::push(std::string literalType, std::string literal) {
  std::cout
	  << "Pushed: "
	  << literal
	  << " of type: "
	  << literalType
	  << std::endl
	  ;
}

void  Parser::assert(std::string literalType, std::string literal) {
  std::cout
	  << "Asserted: "
	  << literal
	  << " of type: "
	  << literalType
	  << std::endl
	  ;
}

void  Parser::pop() {
	std::cout
		<< "pop"
		<< std::endl
		;
}

void  Parser::add() {
	std::cout
		<< "add"
		<< std::endl
		;

}

void  Parser::sub() {
	std::cout
		<< "sub"
		<< std::endl
		;

}

void  Parser::mul() {
	std::cout
		<< "mul"
		<< std::endl
		;

}

void  Parser::div() {
	std::cout
		<< "div"
		<< std::endl
		;

}

void  Parser::mod() {
	std::cout
		<< "mod"
		<< std::endl
		;

}

void  Parser::dump() {
	std::cout
		<< "dump"
		<< std::endl
		;

}

void  Parser::print() {
	std::cout
		<< "print"
		<< std::endl
		;

}

void  Parser::exit() {
	std::cout
		<< "exit"
		<< std::endl
		;

}

void  Parser::terminate() {
	std::cout
		<< "terminate"
		<< std::endl
		;

}

