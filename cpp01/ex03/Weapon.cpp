/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:56:12 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/22 12:12:19 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

const std::string Weapon::getType(void) const
{
	return(this->_type);
}

bool Weapon::setType(const std::string &newType)
{	
	if(newType == "")
	{
		std::cout << "error : empty string"<<std::endl;
		return(false);
	}
	this->_type = newType;
		return(true);

}