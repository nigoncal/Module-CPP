/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:00:31 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/16 15:34:49 by nigoncal         ###   ########lyon.fr   */
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
		~Zombie(void);
		void		announce(void);

		std::string	getName(void);
		void		setName(std::string name);

	private :
		std::string _name;
		
};

	Zombie* zombieHorde( int N, std::string name );

#endif
