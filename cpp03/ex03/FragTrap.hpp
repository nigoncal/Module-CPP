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

#ifndef  FRAG_TRAP_H
# define FRAG_TRAP_H

#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{
	public:
			FragTrap(std::string name);
			FragTrap(FragTrap const &copy);
			~FragTrap(void);
			FragTrap &operator=(FragTrap const &copy);

			void highFivesGuys(void);
};

#endif