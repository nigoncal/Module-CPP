/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:03:09 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/13 11:17:25 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"
#include <iostream>

	HumanA::HumanA(std::string name, Weapon &weapon) : name(name), Weapon(weapon)
	{
	}
	
	HumanA::~HumanA(void)
	{
	}
	
void HumanA::attack(void) const
{
		std::cout<< this->_name << "attack with" << this->weapon->get_type()<<std::endl;
}