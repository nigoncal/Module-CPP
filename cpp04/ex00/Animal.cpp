/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:11:16 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:11:17 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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