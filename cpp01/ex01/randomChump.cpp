/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:48:40 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/08 16:12:10 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump()
{
	srand(time(NULL) + clock());
	std::string names[5] = {"Jules", "Dorian", "jerem", "tutur", "seb"};
	Zombie* z = newZombie(names[rand() % 4]);
	z->announce();
	delete z;
	return ;

}