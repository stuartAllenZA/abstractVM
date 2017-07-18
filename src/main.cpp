#include <header.hpp>

int		main(int ac, char **av) {
	(void)av;
	Lexer lexer;
	Parser parser;
	if (ac == 2)
		lexer.say();
	//	lexer.read(av[1]);
	else {
		for(;;) {
			lexer.say();
			parser.say();
		//	lexer.getCommand();
		//	parser.runCommand();
		}
	}
}

