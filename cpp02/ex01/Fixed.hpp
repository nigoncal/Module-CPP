/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:40:26 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/19 17:14:43 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include<cmath>

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public :

	Fixed(void);
	Fixed(const Fixed& copy);
	Fixed(float val);
	Fixed(int val);
	~Fixed(void);

	float toFloat(void) const;
	int ToInt(void) const;

	Fixed &operator=(const Fixed& other); // surcharge d'operateur egale
	
	int getRawBits(void) const;
	void setRawBits(const int raw);

	private :
	int					_value;
	const static int	_fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif