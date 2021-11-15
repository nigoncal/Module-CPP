#include "iostream"

typedef struct s_Data
{
	int n;
}				Data;

uintptr_t serialize(Data *ptr)
{
	// std::cout << reinterpret_cast<uintptr_t>(ptr) << std::endl; // afficher l'adresse reinterpreté;
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data test;
	Data *test5;

	std::cout << &test << std::endl;
	test5 = deserialize(serialize(&test));
	std::cout << test5 << std::endl;
	return(0);
}