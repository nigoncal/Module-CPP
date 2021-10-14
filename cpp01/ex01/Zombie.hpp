/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:00:31 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/11 13:55:34 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <string>

#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie
{

	public:

		Zombie(void);
<<<<<<< HEAD
=======
		Zombie(std::string name);
>>>>>>> d1fd2ebe3794b03765209cf66a2fddad83ae2870
		~Zombie(void);
		void		announce(void);

		std::string	getName(void);
<<<<<<< HEAD
		void		setName(std::string name);
=======
		void		SetName(std::string name);
>>>>>>> d1fd2ebe3794b03765209cf66a2fddad83ae2870

	private :
		std::string _name;
		
};

<<<<<<< HEAD
	Zombie* zombieHorde( int N, std::string name );
=======
>>>>>>> d1fd2ebe3794b03765209cf66a2fddad83ae2870

#endif
