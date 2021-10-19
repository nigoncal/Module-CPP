/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:03:09 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/18 17:25:52 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include <iostream>

	HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
	{
	}
	
	HumanA::~HumanA(void)
	{
	}
	
	void HumanA::attack(void) const
	{
			std::cout<< this->name << "attack with" << this->weapon.getType()<<std::endl;
	}
	
	Weapon& HumanA::getWeapon(void) const
	{
		return(this->weapon);
	}