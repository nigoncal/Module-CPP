/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:04:11 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/11 17:20:35 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"
#include<iostream>


void	HumanB::attack(void) const
{
	if(this->Weapon == NULL)
		std::cout<< this->_name << "as no weapon" << std::endl;
	else
		std::cout<< this->_name << "attack with" << this->Weapon->get_type()<<std::endl;
}