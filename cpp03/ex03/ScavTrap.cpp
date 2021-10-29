/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:29:10 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/28 14:29:55 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"ScavTrap constructor called"<<std::endl;

	this->_Hitpoints = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
	(void)copy;
	std::cout<<"ScavTrap instance created"<<std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	(void)copy;
	std::cout<<"ScavTrap instance created"<<std::endl;
	return *this;
}
ScavTrap::~ScavTrap(void)
{
	std::cout<<"ScavTrap Destuctor called"<<std::endl;
}

void ScavTrap::highFivesGuys(void)
{
	std::cout<<"hight five request by : "<< this->_name<<std::endl;
}