/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:29:18 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:29:19 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	this->setType("Dog");
	this->brain = new Brain();
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(Dog const &copy)
{
	this->type = copy.type;

	delete this->brain;

	this->brain = new Brain(*copy.brain);

	return *this;
}

Dog::~Dog(void)
{
	for (int i = 0; i < Brain::MAX_IDEAS; i++) {
		this->brain->deleteIdea(i);
	}

	std::cout << "Dog destroyed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof !!" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return this->brain;
}