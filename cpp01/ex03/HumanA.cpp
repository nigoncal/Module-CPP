/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:03:09 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/22 12:15:32 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include <iostream>

	HumanA::HumanA(std::string name, Weapon & weapon ) : _name(name), _weapon(weapon)
	{
	}
	
	HumanA::~HumanA(void)
	{
	}
	
	void HumanA::attack(void) const
	{
			std::cout<< this->_name << "attack with" << this->_weapon.getType()<<std::endl;
	}
	
	Weapon& HumanA::getWeapon(void) const
	{
		return(this->_weapon);
	}