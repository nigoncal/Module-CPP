#include "span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(5);

	sp.addNumber(10);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(2);
	sp.addNumber(11);

	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
}