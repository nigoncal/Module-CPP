#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

template< typename T>
int	easyfind(T tab, int i)
{
	typename T::const_iterator it;

	it = std::find(tab.begin(), tab.end(), i);
	if (it != tab.end())
	{
		std::cout << "Occurence found" << std::endl;
		return (1);
	}
	else
		std::cout << "Occurence not found" << std::endl;
	return (0);
}

#endif