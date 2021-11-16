#include <iostream>
#include "iter.hpp"

void	multiply(int &i)
{
	i *= 2;
}

void	toUpper(char &i)
{
	i -= 32;
}

void	countStr(std::string &str)
{
	std::cout << "Lenght is : " << str.length() << std::endl;
}

int	main()
{
	int intTab[] = {0, 1, 2, 3, 4, 5};
	char charTab[] = {'a', 'b', 'c', 'd'};
	std::string stringTab[] = {"Hello world", "Foo", "Bar"};

	iter(intTab, 6, &multiply);
	iter(charTab, 4, &toUpper);

	for (int i = 0; i < 6; i++) {
		std::cout << intTab[i] << std::endl;
	}

	std::cout << "------------" << std::endl;

	for (int i = 0; i < 4; i++) {
		std::cout << charTab[i] << std::endl;
	}

	std::cout << "------------" << std::endl;
	
	iter(stringTab, 3, &countStr);
}