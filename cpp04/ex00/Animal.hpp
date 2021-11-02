/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:26:12 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:26:15 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
	public:

	Animal(void);
	Animal(Animal const &copy);
	Animal &operator=(Animal const &copy);
	virtual ~Animal(void);

	std::string getType(void) const;
	void		setType(std::string type);

	virtual void	makeSound(void) const;

	protected:

	std::string type;
};

#endif