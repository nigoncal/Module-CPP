/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:00:59 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/28 13:07:58 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main (void)
{
	ClapTrap soldier = ClapTrap("John");
    ClapTrap sol = ClapTrap(soldier);
    soldier.attack("Mike");
    soldier.takeDamage(30);
    soldier.beRepaired(20);
    
    return 0;
}