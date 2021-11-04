#include "Animal.hpp"

Animal::Animal(void)
{
	this->setType("Animal");
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
}

Animal &Animal::operator=(Animal const &copy)
{
	std::cout<<"operator animal called"<<std::endl;
	this->type = copy.type;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType(void) const
{
	return this->type;
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal song" << std::endl;
}