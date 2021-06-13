#include "Span.hpp"

#include <iostream>

#define PRINT(x) std::cout << x << std::endl
#define CATCH	catch (std::exception &e) { PRINT(e.what()); }

int main()
{
	Span s(5);
    Span big(10000);
	try
	{
		s.addNumber(1);
		s.addNumber(2);
		s.addNumber(3);
		s.addNumber(4);
		s.addNumber(5);
		s.addNumber(6);
	}
	catch(std::exception &e)
    { 
        std::cout << e.what() << std::endl;
    }

	try
	{
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch(std::exception &e)
    { 
        std::cout << e.what() << std::endl;
    }

	try
	{
		big.addRange(0, 9999);
		std::cout << big.longestSpan() << std::endl;
	}
	catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	return (0);
}