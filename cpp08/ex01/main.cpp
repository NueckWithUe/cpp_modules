#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(2);
		sp.addNumber(2);
		sp.addNumber(5);
		sp.addNumber(8);
		sp.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Tried to add a number beyond the max amount" << std::endl;
	}

	Span sp = Span(5);
	sp.addNumber(3);
	sp.addNumber(6);
	sp.addNumber(9);
	sp.addNumber(4);
	sp.addNumber(1);
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	return (0);
}