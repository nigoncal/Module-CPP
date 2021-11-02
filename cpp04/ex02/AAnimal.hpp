/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:28:43 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:28:44 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	public:

	AAnimal(void);
	AAnimal(AAnimal const &copy);
	AAnimal &operator=(AAnimal const &copy);
	virtual ~AAnimal(void);

	std::string getType(void) const;
	void		setType(std::string type);

	virtual void	makeSound(void) const = 0;

	protected:

	std::string type;
};

#endif