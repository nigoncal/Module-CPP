#include "easyfind.hpp"

int main(void)
{
	std::list<int> v(42, 10);

	easyfind(v, 10);
	easyfind(v, 50);


	std::vector<int> v2(42, 10);

	easyfind(v2, 10);
	easyfind(v2, 50);
}