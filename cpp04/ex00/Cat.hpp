/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:26:20 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:26:21 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
	
	Cat(void);
	Cat(Cat const &copy);
	Cat &operator=(Cat const &copy);
	~Cat(void);

	void	makeSound(void) const;
};

#endif