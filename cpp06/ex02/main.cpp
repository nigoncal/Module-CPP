#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

class Base { public: virtual ~Base(void) {} };
class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate(void)
{
	int		r;

	srand ((unsigned int)time(0));

	r = rand() % 3;
	if (r == 1)
		return new A;
	else if (r == 2)
		return new B;
	else
		return new C;
}

void	identify(Base *p)
{
	A *classA = dynamic_cast<A*>(p);
	B *classB = dynamic_cast<B*>(p);
	C *classC = dynamic_cast<C*>(p);

	if (classA != NULL)
		std::cout << "type A" << std::endl;
	else if (classB != NULL)
		std::cout << "type B" << std::endl;
	else if (classC != NULL)
		std::cout << "type C" << std::endl;
	else
		std::cout << "Erreur type" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A classA = dynamic_cast<A&>(p);
		std::cout << "type A" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc)
	{
		;
	}
	try
	{
		B classB = dynamic_cast<B&>(p);
		std::cout << "type B" << std::endl;
		return ;
	}
	catch(std::bad_cast &bc)
	{
		;
	}
	try
	{
		C classC = dynamic_cast<C&>(p);
		std::cout << "type C" << std::endl;
		return ;
	}
	catch(std::bad_cast &bc)
	{
		;
	}
}

int main(void)
{
	Base *t = generate();
	identify(t);
	identify(*t);
	return (0);
}