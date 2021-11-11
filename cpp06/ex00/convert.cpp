#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <math.h>
#include <climits>
#include <iomanip>

void transform(char *val)
{
	double value;

	if (strlen(val) == 1)
		value = val[0];
	else
		value = atof(val);

	std::cout << "char: ";

	if (value < CHAR_MIN || value > CHAR_MAX || isnan(value))
		std::cout << "impossible" << std::endl;
	else if (isprint(static_cast<int>(value)))
		std::cout << static_cast<char>(value) << std::endl;
	else
		std::cout << "impossible to display" << std::endl;

	std::cout << "int:    ";

	if (value >= INT_MIN && value <= INT_MAX && !isnan(value) && !isinf(value))
		std::cout << static_cast<int>(value) << std::endl;
	else
		std::cout << "impossible " << std::endl;

	std::cout << "float:  ";

	if (isnan(value))
		std::cout << "nanf" << std::endl;
	else if (isinf(value))
		std::cout << (value < 0 ? "-" : "") << "inf" << std::endl;
	else
		std::cout << std::setprecision(1) << std::fixed << static_cast<float>(value) << "f" << std::endl;
	
	std::cout << "double: ";

	if (isnan(value))
		std::cout << "nan" << std::endl;
	else if (isinf(value))
		std::cout << (value < 0 ? "-" : "") << "inf" << std::endl;
	else
		std::cout << value << std::endl;
}

int main(int c, char *v[])
{
	if (c != 2)
	{
		std::cout << "./convert [number]" << std::endl;
		return 1;
	}

	transform(v[1]);
	return 0;
}