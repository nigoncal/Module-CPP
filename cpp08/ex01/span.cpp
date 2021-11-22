#include "span.hpp"
#include <vector>
#include <iostream>

Span::Span()
{}

Span::Span(unsigned int n) : _max(n)
{
	this->_list.reserve(n);
}

Span::~Span()
{}

Span::Span(Span const &cpy)
{
	*this = cpy;
}

Span &Span::operator=(Span const &cpy)
{
	this->_max = cpy._max;
	this->_list = cpy._list;
	return *this;
}

void Span::addNumber(int nbr)
{
	if (this->_list.size() >= _max)
		throw MaxNbrException();

	std::vector<int>::iterator iterator;

	iterator = std::find(this->_list.begin(), this->_list.end(), nbr);

	if (iterator != this->_list.end())
		throw NbrExistException();
	
	this->_list.push_back(nbr);
}

int	Span::shortestSpan()
{
	if (this->_list.size() <= 1)
		throw NoNbrException();
	std::sort(this->_list.begin(), this->_list.end());
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator i;
	std::vector<int>::const_iterator ite = this->_list.end();
	int shortest = INT_MAX;
	for (it = this->_list.begin(); it != ite; ++it)
	{
		for (i = it + 1; i != ite; ++i)
			if (shortest > *i - *it)
				shortest = *i - *it;
	}
	return shortest;

}


unsigned int Span::longestSpan()
{
	if (this->_list.size() <= 1)
		throw NoNbrException();
	
	int a = 0;
	int b = 0;
	std::vector<int>::iterator iterator;

	iterator = std::min_element(this->_list.begin(), this->_list.end());
	a = *iterator;

	iterator = std::max_element(this->_list.begin(), this->_list.end());
	b = *iterator;

	return static_cast<unsigned int>(std::max(a, b) - std::min(a, b));
}