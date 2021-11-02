/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:29:12 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:29:13 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
	
	Cat(void);
	Cat(Cat const &copy);
	Cat &operator=(Cat const &copy);
	virtual ~Cat(void);

	void	makeSound(void) const;
	Brain*	getBrain(void) const;

	private:

	Brain* brain;
};

#endif