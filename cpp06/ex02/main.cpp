#include <iostream>
#include "Base.hpp"
#include "Hello.hpp"

Base::~Base() {}

Base * generate(void)
{
	srand(time(0) + std::clock());

	int nbr = rand() % 3;

	if (nbr == 0)
		return new A();
	if (nbr == 1)
		return new B();
	if (nbr == 2)
		return new C();

	return NULL;
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
	Base result;

	try {
		result = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::bad_cast &bc) {}

	try {
		result = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch (std::bad_cast &bc) {}

	try {
		result = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch (std::bad_cast &bc) {}
}

int	main()
{
	Base *base = generate();

	std::cout << "From pointer : " << std::endl;

	identify_from_pointer(base);

	std::cout << "From reference : " << std::endl;

	identify_from_reference(*base);

	return 0;
}