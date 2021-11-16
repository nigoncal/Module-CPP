#include "whatever.hpp"


int main(void)
{
	// int x;
	// int y;

	// x = 42;
	// y = 69;

	// std::cout << min<int>(x, y) << std::endl;
	// std::cout << max<int>(x, y) << std::endl;
	// std::cout << "x value: " << x << " y value: " << y << std::endl;
	// swap<int>(x, y);
	// std::cout << "x value: " << x << " y value: " << y << std::endl;

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}