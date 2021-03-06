/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:00:59 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/28 14:33:02 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void)
{
	FragTrap soldier = FragTrap("John");

	soldier.attack("Mike");
	soldier.takeDamage(30);
	soldier.beRepaired(20);

	soldier.highFivesGuys();
	
	DiamondTrap diamon = DiamondTrap("A");
	
	diamon.attack("B");

	diamon.beRepaired(10);

	diamon.whoAmI();

	return 0;
}