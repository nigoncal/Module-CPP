/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:26:25 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:26:28 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
	
	Dog(void);
	Dog(Dog const &copy);
	Dog &operator=(Dog const &copy);
	~Dog(void);

	void	makeSound(void) const;
};

#endif