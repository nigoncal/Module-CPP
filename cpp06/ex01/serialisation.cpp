#include "serialisation.hpp"
#include <iostream>

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main()
{
	Data product;
	uintptr_t addr;

	product.price = 1999.99;
	product.name = "Laptop";

	std::cout << product.name + " - " << product.price << "$" << std::endl;
	addr = serialize(&product);

	std::cout << "Product serialized address: " << addr << std::endl;

	Data *product_cpy = deserialize(addr);

	std::cout << "Product addr		: " << &product << std::endl;
	std::cout << "Product cpy addr	: " << product_cpy << std::endl;	

	std::cout << product_cpy->name + " - " << product_cpy->price << "$" << std::endl;
}