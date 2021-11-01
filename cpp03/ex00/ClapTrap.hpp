/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:39:24 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/27 17:14:17 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef  CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>

class	ClapTrap
{
	public :
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &copy);
	
		 void attack(std::string const & target);
		 void takeDamage(unsigned int amount);
		 void beRepaired(unsigned int amount);

	private :
		std::string _name;
		int _Hitpoints;
		int _Energy_points;
		int _Attack_damage;
};

#endif