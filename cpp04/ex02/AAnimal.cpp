/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:28:39 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:28:40 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	this->setType("Animal");
	std::cout << "Animal created" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	*this = copy;
}

AAnimal &AAnimal::operator=(AAnimal const &copy)
{
	this->type = copy.type;
	return *this;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal destroyed" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return this->type;
}

void	AAnimal::setType(std::string type)
{
	this->type = type;
}