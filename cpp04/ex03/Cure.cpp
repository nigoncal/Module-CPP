/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:30:01 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:30:02 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(Cure const &cpy)
{
	this->type = cpy.type;
}

Cure &Cure::operator=(Cure const &cpy)
{
	if (&cpy == this) {
		return *this;
	}

	this->type = cpy.type;
	return *this;
}

Cure::~Cure()
{}

AMateria	*Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() + "'s" << " wounds *" << std::endl;
}