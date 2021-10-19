/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:56:12 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/18 17:36:23 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon()
{
}

const std::string Weapon::getType(void) const
{
	return(this->type);
}

bool Weapon::setType(const std::string &newType)
{	
	if(newType == "")
	{
		std::cout << "error : empty string"<<std::endl;
		return(false);
	}
	this->type = newType;
		return(true);

}