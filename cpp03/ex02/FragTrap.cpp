/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:12:38 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/28 14:26:26 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"FragTrap constructor called"<<std::endl;

	this->_Hitpoints = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
	(void)copy;
	std::cout<<"FragTrap instance created"<<std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
	(void)copy;
	std::cout<<"FragTrap instance created"<<std::endl;
	return *this;
}
FragTrap::~FragTrap(void)
{
	std::cout<<"FragTrap Destuctor called"<<std::endl;
}


void FragTrap::guardGate()
{
	std::cout<<"FragTrap "<<this->_name<<" is enter in Gate keeper mode"<<std::endl;
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap "<< this->_name;
	std::cout << " attack " << target;
	std::cout << " causing "<< this->_Attack_damage << " points of damage!"<<std::endl;
}