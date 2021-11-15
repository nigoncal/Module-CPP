#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

bool	DigitValue(std::string value)
{
	int len = value.length();
	int dot;

	dot = 0;
	for (int i = 0; i < len; ++i) {
		if ((value[i] == '-' || value[i] == '+') && i == 0)
			continue ;
		else if (value[i] == 'f' && i + 1 == len)
			continue ;
		else if (isdigit(value[i]))
			continue ;
		else if ((value[i] == '.' || value[i] == ',') && dot == 0 && i + 1 != len)
		{
			dot = 1;
			continue ;
		}
		else
			return (false);
	}
	return (true);
}

bool StrValue(std::string value)
{
	if (value == "-inff" || value == "+inff" || value == "nanf" || value == "nan" || value == "-inf" || value == "+inf")
		return (true);
	else
		return (false);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Not a good format. Use: ./ex00 [char/int/float/double]" << std::endl;
		return 1;
	}

	std::string value = av[1];
	double	nbr;

	if (!DigitValue(value) && !StrValue(value))
	{
		if (value.length() == 1)
			nbr = static_cast<double>(value[0]);
		else
		{
			std::cout << "Value not valid" << std::endl;
			return (-1);
		}
	}
	else
		nbr = std::stod(value);

	char c = static_cast<char>(nbr);
	int n = static_cast<int>(nbr);
	float f = static_cast<float>(nbr);

	if (StrValue(value) || nbr > std::numeric_limits<char>::max() || nbr < std::numeric_limits<char>::min())
		std::cout << "char: impossible" << std::endl;
	else if (nbr < 32 || nbr >= 127 )
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;

	if (StrValue(value) || nbr > std::numeric_limits<int>::max() || nbr < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << n << std::endl;

	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << nbr << std::endl;
	return 0;
}