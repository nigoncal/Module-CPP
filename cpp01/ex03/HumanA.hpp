/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:58:53 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/22 12:16:18 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	public :
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	
	void	attack(void) const;


	bool	setWeapon (Weapon& new_Weapon);
	Weapon& getWeapon ( void ) const;

	private :
		std::string	_name;
		Weapon&		_weapon;
};