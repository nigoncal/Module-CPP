/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:29:12 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/28 13:04:33 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
			ScavTrap(std::string name);
			ScavTrap(ScavTrap const &copy);
			~ScavTrap(void);
			ScavTrap &operator=(ScavTrap const &copy);
	void	guardGate();
	void  	attack(std::string const & target);
		
};
