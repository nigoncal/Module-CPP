/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:26:15 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:26:16 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->setType("Cat");
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
}

Cat &Cat::operator=(Cat const &copy)
{
	this->type = copy.type;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuuu !!" << std::endl;
}