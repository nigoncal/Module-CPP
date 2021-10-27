/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:04:11 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/22 12:17:30 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"
#include<iostream>

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void) const
{
	if(this->_weapon == NULL)
		std::cout<< this->_name << "as no weapon" << std::endl;
	else
		std::cout<< this->_name << "attack with" << this->_weapon->getType()<<std::endl;
}

Weapon& HumanB::getWeapon (void ) const
{
	return(*(this->_weapon));
}

bool	HumanB::setWeapon (Weapon& newWeapon)
{
	if(newWeapon.getType() == "")
	{
		std::cout<<"empty string"<<std::endl;
		return(false);
	}
	this->_weapon = &newWeapon;
	return(true);
}