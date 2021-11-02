/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:34:17 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:34:18 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{

	public:
		Ice();
		Ice(Ice const &cpy);
		virtual ~Ice();

		Ice &operator=(Ice const &cpy);

		AMateria *clone() const;
		void	use(ICharacter &target);
};

#endif