#ifndef INCLUDE_EXCEPTIONS_CLASS_HPP_
#define INCLUDE_EXCEPTIONS_CLASS_HPP_

#include <exception>

class Exceptions {
	class paramaterException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Too many parameters to function abstractVM";
		}
	} parameters;
};

#endif

