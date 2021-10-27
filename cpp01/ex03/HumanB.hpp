/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:50:34 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/22 12:16:30 by nigoncal         ###   ########lyon.fr   */
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
	
	bool	setWeapon(Weapon& new_Weapon);
	Weapon& getWeapon (void) const;

	private :
		std::string	_name;
		Weapon 		*_weapon;
};