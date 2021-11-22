#include "span.hpp"

Span::Span(void)
{
	this->_n = 0;
	this->_space = 0;
	this->_v1 = new std::vector<int>[0];
	return ;
}

Span::Span(unsigned int n)
{
	this->_n = n;
	this->_space = 0;
	this->_v1 = new std::vector<int>[this->_n];
	return ;
}

Span::Span(Span const &copy)
{
	this->_n = copy._n;
	this->_space = 0;
	this->_v1 = new std::vector<int>[this->_n];
	this->_v1 = copy._v1;
}

Span::~Span(void)
{
	delete [] this->_v1;
	return ;
}

Span	&Span::operator=(Span const &rhs)
{
	this->_n = rhs._n;
	this->_space = 0;
	this->_v1 = new std::vector<int>[this->_n];
	this->_v1 = rhs._v1;
	return(*this);
}

void	Span::addNumber(int n)
{
	try
	{
		if (this->_space == this->_n)
			throw numberExceptionFull();
		this->_v1->push_back(n);
		this->_space++;
	}
	catch(numberExceptionFull& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Span::addRange(std::vector<int>::const_iterator it, std::vector<int>::const_iterator ite)
{
	while (it < ite)
	{
		if (this->_space == this->_n)
			throw numberExceptionFull();
		this->_v1->push_back(*it);
		it++;
		this->_space++;
	}
}

int Span::shortestSpan(void)
{
	if (this->_v1->size() <= 1)
		throw numberExceptionEmpty();
	std::sort(this->_v1->begin(), this->_v1->end());
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator i;
	std::vector<int>::const_iterator ite = this->_v1->end();
	int shortest = INT_MAX;
	for (it = this->_v1->begin(); it != ite; ++it)
	{
		for (i = it + 1; i != ite; ++i)
			if (shortest > *i - *it)
				shortest = *i - *it;
	}
	return shortest;
}

int Span::longestSpan(void)
{

	if (this->_v1->size() <= 1)
		throw numberExceptionEmpty();
	std::sort(this->_v1->begin(), this->_v1->end());
	std::vector<int>::const_iterator it = this->_v1->begin();
	std::vector<int>::const_iterator ite = this->_v1->end() - 1;
	return (*ite - *it);
}

const char *Span::numberExceptionEmpty::what() const throw()
{
	return ("it's empty or just one number");
}

const char *Span::numberExceptionFull::what() const throw()
{
	return ("it's full");
}
