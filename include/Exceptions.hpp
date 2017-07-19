#ifndef INCLUDE_EXCEPTIONS_CLASS_HPP_
#define INCLUDE_EXCEPTIONS_CLASS_HPP_

#include <stdexcept>

class Exceptions {
	public:
		class ParameterCountException: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Too many parameters to function abstractVM";
				}
		};

		class FileFormatException: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "File is in the incorrect format";
				}
		};
};

#endif

