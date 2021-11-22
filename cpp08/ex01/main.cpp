#include "span.hpp"
#include <vector>

int main()
{
	Span sp = Span(5);

	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(Span::numberExceptionEmpty const & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(Span::numberExceptionEmpty const & e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch(Span::numberExceptionEmpty const & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(Span::numberExceptionEmpty const & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch(Span::numberExceptionFull const & e)
	{
		std::cerr << e.what() << '\n';
	}

	Span sp2 = Span(10000);
	std::vector<int> v;
	for (int i = 0; i < 10200; i++)
	{
		v.push_back(i);
	}
	try
	{
		sp2.addRange(v.begin(), v.end());
	}
	catch(Span::numberExceptionFull const & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return (0);
}
