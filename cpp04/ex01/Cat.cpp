#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout<<"Cat default constructor has been called"<<std::endl;
	this->setType("Cat");
	this->brain = new Brain();
}

Cat::Cat(Cat const &copy)
{
	std::cout<<"Cat constructor by copy has been called"<<std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &copy)
{
	this->type = copy.type;

	delete this->brain;

	this->brain = new Brain(*copy.brain);

	return *this;
}

Cat::~Cat(void)
{
	for (int i = 0; i < Brain::MAX_IDEAS; i++) {
		this->brain->deleteIdea(i);
	}

	delete this->brain;

	std::cout << "Cat destroyed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuuu !!" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return this->brain;
}