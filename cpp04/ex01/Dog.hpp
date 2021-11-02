/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:27:45 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:27:46 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
	Dog &operator=(Dog &copy);
	~Dog(void);

	void	makeSound(void) const;
	Brain*	getBrain(void) const;

	private:

	Brain* brain;
};

#endif