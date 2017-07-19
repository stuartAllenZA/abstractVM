#include <AbstractVM.hpp>

int		main(int ac, char **av) {
	try {
		Lexer lexer(ac, av);
		//Parser(lexer.getTokens());
	}

	catch (Exceptions::ParameterCountException const &ex)
	{
		std::cerr
			<< "Parameter count exception: "
			<< ex.what()
			<< std::endl
			;
	}


	catch (Exceptions::FileFormatException const &ex)
	{
		std::cerr
			<< "File format exception: "
			<< ex.what()
			<< std::endl
			;
	}

	catch (std::exception const& ex)
	{
		std::cerr
			<< "std::exception: "
			<< ex.what()
			<< std::endl
			;
	}

	catch (...)
	{
		std::cerr
			<< "Unknown Exception: "
			<< std::endl
			;
	}
}

