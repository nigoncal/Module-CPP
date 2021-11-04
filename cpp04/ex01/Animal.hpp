#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:

	Animal(void);
	Animal(Animal const &copy);
 	Animal &operator=(Animal const &copy);
	virtual ~Animal(void);

	std::string getType(void) const;
	void		setType(std::string type);

	virtual void	makeSound(void) const;

	protected:

	std::string type;
};

#endif