/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:26:45 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:26:46 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy)
{
	this->type = copy.type;
	return *this;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal song" << std::endl;
}