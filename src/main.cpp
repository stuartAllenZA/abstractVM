#include <header.hpp>

int main(int argc, char **argv) {
	Lexer lexer;
	Parser parser;
	Stack stack(64000);
	stack.dump();
	try {
		if (argc == 1) {
			lexer.shell();
		}
		else if (argc == 2) {
			lexer.read(argv[1]);
			parser.process(lexer);
		}
		else throw std::exception();
	} catch(std::exception *e) {
		std::cerr
			<< e->what()
			<< std::endl
			;
	}
}

