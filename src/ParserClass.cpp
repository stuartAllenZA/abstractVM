#include <ParserClass.hpp>

Parser::Parser(std::list<std::string> tokenOperations, std::list<std::string> tokenLiterals) {
	std::list<std::string>::const_iterator literalsIterator = tokenLiterals.begin();
	for (std::list<std::string>::const_iterator  operationsIterator = tokenOperations.begin(); operationsIterator != tokenOperations.end(); operationsIterator++) {
		if (*operationsIterator == "push") {
			push(*literalsIterator);
			literalsIterator++;
		}
		else if (*operationsIterator == "assert") {
			assert(*literalsIterator);
			literalsIterator++;
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

void  Parser::push(std::string literal) {
  std::cout
	  << "Pushed: "
	  << literal
	  << std::endl
	  ;
}

void  Parser::assert(std::string literal) {
  std::cout
	  << "Asserted: "
	  << literal
	  << std::endl
	  ;
}

void  Parser::pop() {

}

void  Parser::add() {

}

void  Parser::sub() {

}

void  Parser::mul() {

}

void  Parser::div() {

}

void  Parser::mod() {

}

void  Parser::dump() {

}

void  Parser::print() {

}

void  Parser::exit() {

}

void  Parser::terminate() {

}

