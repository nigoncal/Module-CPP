/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:48:40 by nigoncal          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/10/11 12:21:02 by nigoncal         ###   ########lyon.fr   */
=======
/*   Updated: 2021/10/08 16:15:11 by nigoncal         ###   ########lyon.fr   */
>>>>>>> d1fd2ebe3794b03765209cf66a2fddad83ae2870
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

<<<<<<< HEAD
void randomChump(std::string name)
{
	Zombie* z = newZombie(name);
	z->announce();
	delete z;
	return ;
=======
void randomChump( std::string name)
{
	srand(time(NULL) + clock());
	Zombie* z = newZombie(name[rand() % 5]);
	z->announce();
	delete z;
	return ;

>>>>>>> d1fd2ebe3794b03765209cf66a2fddad83ae2870
}