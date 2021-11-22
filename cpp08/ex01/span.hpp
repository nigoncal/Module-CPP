#ifndef SPAN_H
# define SPAN_H

#include <vector>
#include <algorithm>

class Span
{
	public:
		Span(unsigned int n);
		~Span();
		Span(Span const &cpy);
		Span &operator=(Span const &cpy);

		class NbrExistException : public std::exception {
			public:
				virtual const char* what() const throw ()
				{
					return ("The number exist.");
				}
		};

		class MaxNbrException : public std::exception {
			public:
				virtual const char* what() const throw ()
				{
					return ("The list is full.");
				}
		};

		class NoNbrException : public std::exception {
			public:
				virtual const char* what() const throw ()
				{
					return ("There is no nbr.");
				}
		};

		void addNumber(int nbr);
		int shortestSpan();
		unsigned int longestSpan();

	private:
		Span();

		std::vector<int>	_list;
		unsigned int		_max;
};

#endif