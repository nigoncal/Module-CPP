/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:41:07 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/28 14:59:53 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"



DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    std::cout <<"DiamondTrap constructor called"<<std::endl;

    ClapTrap::_name += "_clap_name";
    this->_name = name;
    
    this->_Hitpoints = FragTrap::_Hitpoints;
    this->_Energy_points = ScavTrap::_Energy_points;
    this->_Attack_damage = FragTrap::_Attack_damage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy): ClapTrap(copy._name), FragTrap(copy._name), ScavTrap(copy._name)
{
    std::cout<<"DiamondTrap Instance created" << std::endl;
    *this = copy;
}


DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy)
{
	this->_Hitpoints		= copy._Hitpoints;
	this->_Energy_points 	= copy._Energy_points;
	this->_Attack_damage 	= copy._Attack_damage;

	return *this;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap instance destroyed." << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Diamond name : " << this->_name << std::endl;
	std::cout << "Clap name : " << ClapTrap::_name << std::endl;
}