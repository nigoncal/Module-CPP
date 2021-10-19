/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:38:12 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/18 17:38:31 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */



#ifndef WEAPON_HPP
# define WEAPON_HPP

#include<iostream>
#include<string>
class Weapon
{
	public :
		Weapon(std::string type);
		~Weapon(void);

	const std::string		getType(void) const;
	bool					setType(const std::string &newType);

	private :

		std::string type;
};

#endif