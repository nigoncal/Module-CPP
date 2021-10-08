/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:37:58 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/04 12:40:49 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *z = new Zombie(name); // creation de l'instance zombie en allocation dynamique avec new
	return(z);
}
