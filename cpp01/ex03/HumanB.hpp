/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:50:34 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/18 17:21:27 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public :	
	HumanB(std::string name);
	~HumanB(void);
	
	void	attack(void) const;
	
	Weapon& getWeapon (void) const;
	bool	setWeapon(Weapon& new_Weapon);

	private :
		std::string	name;
		Weapon 		*weapon;
};