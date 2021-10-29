/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:12:40 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/28 14:25:03 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
	public:
			FragTrap(std::string name);
			FragTrap(FragTrap const &copy);
			~FragTrap(void);
			FragTrap &operator=(FragTrap const &copy);
	void	guardGate();
	void  	attack(std::string const & target);
		
};
