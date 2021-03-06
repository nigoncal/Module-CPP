/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:32:40 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/11 14:03:06 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int	main (void)
{
	int nb_zombie = 15;
	Zombie *horde = zombieHorde(nb_zombie, "roberta");
	
	for(int i = 0; i != nb_zombie; i++)
		horde[i].announce();
	delete [] horde;

}