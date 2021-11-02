/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:29:07 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:29:08 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->setType("Cat");
	this->brain = new Brain();
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(Cat const &copy)
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