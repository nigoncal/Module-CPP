/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:07:48 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/26 15:29:44 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed(void) : _value(0) // permet d'initialiser directement l'attribut
{
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout<<"copy constructor called"<<std::endl;
	this->operator=(copy);
}

Fixed::Fixed(float val): _value(val * roundf(1 << this->_fractional_bits))
{
	std::cout<<"constructor called"<<std::endl;
}

Fixed::Fixed(const int val) : _value(val << this->_fractional_bits)
{
	std::cout<<"Int constructor called"<<std::endl;
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

std::ostream &operator<<(std::ostream &out, Fixed const &_value)
{
	out << _value.toFloat();
	return(out);
}

void 	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int	Fixed::toInt(void) const
{
	return this->_value >> this-> _fractional_bits;
}

float	Fixed::toFloat(void) const
{
	return((float) this->_value / (float)(1 << this->_fractional_bits));
}

int Fixed::getRawBits(void) const
{
	return this->_value;
}