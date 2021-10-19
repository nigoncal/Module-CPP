/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:04:11 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/18 17:35:11 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"
#include<iostream>

HumanB::HumanB(std::string name) : name(name), weapon()
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void) const
{
	if(this->weapon == NULL)
		std::cout<< this->name << "as no weapon" << std::endl;
	else
		std::cout<< this->name << "attack with" << this->weapon->getType()<<std::endl;
}

Weapon& HumanB::getWeapon (void ) const
{
	return(*(this->weapon));
}

bool	HumanB::setWeapon (Weapon& newWeapon)
{
	if(newWeapon.getType() == "")
	{
		std::cout<<"empty string"<<std::endl;
		return(false);
	}
	this->weapon = &newWeapon;
	return(true);
}