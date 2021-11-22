#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

class Span
{
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const &copy);
		~Span(void);

		Span &operator=(Span const &rhs);
		void addNumber(int n);
		void addRange(std::vector<int>::const_iterator it, std::vector<int>::const_iterator ite);
		int shortestSpan(void);
		int longestSpan(void);

	class numberExceptionEmpty: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class numberExceptionFull: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	private:
		unsigned int		_n;
		unsigned int		_space;
		std::vector<int>	*_v1;
};

#endif