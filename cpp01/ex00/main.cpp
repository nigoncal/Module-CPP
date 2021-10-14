/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
<<<<<<<< HEAD:cpp01/ex00/main.cpp
/*   Created: 2021/10/04 14:32:40 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/08 16:48:55 by nigoncal         ###   ########lyon.fr   */
========
/*   Created: 2021/10/04 12:48:40 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/08 16:12:10 by nigoncal         ###   ########lyon.fr   */
>>>>>>>> d1fd2ebe3794b03765209cf66a2fddad83ae2870:cpp01/ex01/randomChump.cpp
=======
/*   Created: 2021/10/04 14:32:40 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/08 16:15:20 by nigoncal         ###   ########lyon.fr   */
>>>>>>> d1fd2ebe3794b03765209cf66a2fddad83ae2870
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int	main (void)
{
<<<<<<< HEAD
<<<<<<<< HEAD:cpp01/ex00/main.cpp
	
	srand(time(NULL) + clock());
	std::string names[6] = {"ZOMB1", "ZOMB2", "ZOMB3", "ZOMB4", "ZOMB5", "ZOMB6"};
========
	srand(time(NULL) + clock());
	std::string names[5] = {"Jules", "Dorian", "jerem", "tutur", "seb"};
	Zombie* z = newZombie(names[rand() % 4]);
	z->announce();
	delete z;
	return ;
>>>>>>>> d1fd2ebe3794b03765209cf66a2fddad83ae2870:cpp01/ex01/randomChump.cpp

	randomChump(names[rand() % 6]);
	randomChump(names[rand() % 6]);
	randomChump(names[rand() % 6]);
=======
	std::string names[6] = {"ZOMB1", "ZOMB2", "ZOMB3", "ZOMB4", "ZOMB5", "ZOMB6"};
	randomChump();
	randomChump();
	randomChump();
>>>>>>> d1fd2ebe3794b03765209cf66a2fddad83ae2870
}