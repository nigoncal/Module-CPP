#ifndef CAT_H
# define CAT_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
	
	Cat(void);
	Cat(Cat const &copy);
	virtual Cat &operator=(const Cat &copy);
	virtual ~Cat(void);

	void	makeSound(void) const;
	Brain*	getBrain(void) const;

	private:
		Brain* brain;
};

#endif