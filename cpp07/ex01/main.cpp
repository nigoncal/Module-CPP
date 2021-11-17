#include "iter.hpp"

template <typename T>

void print(T const & x)
{
	std::cout << x << std::endl;
	return;
}

int main()
{
	int tab[] = {0, 1, 2, 3, 5};
	iter(tab, 5, print);
	return(0);
}