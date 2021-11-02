/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:26:32 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:26:33 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->setType("Dog");
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(Dog const &copy)
{
	*this = copy;
}

Dog &Dog::operator=(Dog const &copy)
{
	this->type = copy.type;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof !!" << std::endl;
}