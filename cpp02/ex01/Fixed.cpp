/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:07:48 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/19 17:25:23 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed(void) : _value(0) // permet d'initialiser directement l'attribut
{
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::~Fixed(void)
{
	std::cout<<"Default destructor called"<<std::endl;
}

Fixed& Fixed::operator=(const Fixed& a) //apprentisage de cette syntaxe
{
	std::cout<<"Assignation operator called"<<std::endl;
	this->_value = a.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member fuction called"<<std::endl;
	return this->_value; 
}

void 	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}


int	Fixed::ToInt(void) const
{
	return this->_value >>this-> _fractional_bits;
}

float	Fixed::toFloat(void) const
{
	return((float) this->_value / (float)(1 << this->_fractional_bits));
}

int Fixed::getRawBits(void) const
{
	return this->_value;
}