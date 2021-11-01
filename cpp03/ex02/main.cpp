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

#include"FragTrap.hpp"

int main (void)
{
	FragTrap soldier = FragTrap("John");

    soldier.attack("bob"); // est redef dans le ScavTrap
    soldier.takeDamage(30); // est call directement par rapport au parent
    soldier.beRepaired(20); // est call directement par rapport au parent

    soldier.highFivesGuys();
    return 0;
}