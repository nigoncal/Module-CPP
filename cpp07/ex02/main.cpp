#include <iostream>
#include "Array.hpp"

int	main()
{
	Array<int> a(10);
	Array<std::string> b(100);
	Array<int> f;

	std::cout << f.size() << std::endl;
	try {
		f[10] = 0;	
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	a[0] = 42;

	b[0] = "Hello";
	b[99] = "World";

	std::cout << a.size() << std::endl;
	std::cout << a[0] << std::endl;

	std::cout << "=========" << std::endl;

	std::cout << b.size() << std::endl;
	std::cout << b[0] << std::endl;
	std::cout << b[99] << std::endl;
}