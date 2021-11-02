/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:26:57 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:26:58 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->setType("WrongCat");
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
	*this = copy;
}

WrongCat &WrongCat::operator=(WrongCat const &copy)
{
	this->type = copy.type;
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroyed" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaouuuu !!" << std::endl;
}