#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <stack>
#include <iostream>

template< typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void){}
		MutantStack(MutantStack const &copy)
		{
			*this = copy;
		}
		~MutantStack(){}

		MutantStack &operator=(MutantStack const &rhs)
		{
			if (*this != &rhs) 
				*this = new std::stack<T>(rhs); 
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {return std::stack<T>::c.begin();};
		iterator end() {return std::stack<T>::c.end();};
};

#endif