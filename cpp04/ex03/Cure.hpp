/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:30:06 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:30:07 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{

	public:
		Cure();
		Cure(Cure const &cpy);
		virtual ~Cure();

		Cure &operator=(Cure const &cpy);

		AMateria *clone() const;
		void	use(ICharacter &target);
};

#endif