#ifndef DOG_H
# define DOG_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
	
	Dog(void);
	Dog(Dog const &copy);
	virtual Dog &operator=(Dog &copy);
	virtual ~Dog(void);

	void	makeSound(void) const;
	Brain*	getBrain(void) const;

	private:
		Brain* brain;
};

#endif