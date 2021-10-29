/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:39:20 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/28 14:32:55 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout<<"ClapTrap constructor called"<<std::endl;
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout<<"ClapTrap constructor by copy called"<<std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy)
{
	this->_Hitpoints = copy._Hitpoints;
	this->_Energy_points = copy._Energy_points;
	this->_Attack_damage = copy._Energy_points;

	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout<<"ClapTrap destructor called"<<std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap "<< this->_name;
	std::cout << " attack " << target;
	std::cout << " causing "<< this->_Attack_damage << " points of damage!"<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_Energy_points -= amount;
	std::cout << "ClapTrap "<< this->_name;
	std::cout << " take " << amount;
	std::cout<< " point of health !"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_Energy_points -= amount;
	this->_Attack_damage += amount;
	std::cout << "ClapTrap "<< this->_name;
	std::cout << " take " << amount;
	std::cout<< " point of damage !"<< std::endl;
}
