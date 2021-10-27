/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:31:36 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/21 15:52:19 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	std::string names[6] = {"ZOMB1", "ZOMB2", "ZOMB3", "ZOMB4", "ZOMB5", "ZOMB6"};
	
	srand(time(NULL) + clock());
	
	randomChump(names[rand() % 6]);
	randomChump(names[rand() % 6]);
	randomChump(names[rand() % 6]);
}