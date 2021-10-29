/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:39:24 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/28 15:45:04 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

	protected : //permet d'heriter
		std::string _name;
		int _Hitpoints;
		int _Energy_points;
		int _Attack_damage;
};