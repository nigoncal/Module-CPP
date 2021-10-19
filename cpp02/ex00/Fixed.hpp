/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:40:26 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/19 16:57:23 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public :

	Fixed(void);
	Fixed(const Fixed& copy); // constructeur par copie
	~Fixed(void);

	Fixed &operator=(const Fixed& other); // surcharge d'operateur egale
	
	int getRawBits(void) const;
	void setRawBits(const int raw);

	private :
	int					_value;
	const static int	_fractional_bits = 8;
};

#endif