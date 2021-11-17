#include "mutanstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(25);
	mstack.push(15);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	mstack.pop();
	mstack.pop();

	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);


	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	MutantStack<int> mstack2;

	mstack2.push(1);
	mstack2.push(2);
	mstack2.push(3);
	mstack2.push(4);

	MutantStack<int>::iterator it2;
	MutantStack<int>::iterator ite2 = mstack2.end();
	for (it2 = mstack2.begin(); it2 != ite2; it2++)
	{
		std::cout << *it2 << std::endl;
	}
	std::stack<int> s2(mstack2);
	return 0;
}