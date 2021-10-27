/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:03:37 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/27 13:03:40 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed(void): _value(0)
{}
Fixed::Fixed(const Fixed& copy)
{
    this->operator=(copy);
}
Fixed::Fixed(float val): _value(roundf(val * (1 << this->_fractionnal_bits)))
{}
Fixed::Fixed(const int val): _value(val << this->_fractionnal_bits)
{}
Fixed::~Fixed(void)
{}
void Fixed::operator=(const Fixed& a)
{
    this->_value = a.getRawBits();
}
std::ostream &operator<<(std::ostream &out, Fixed const &_value)
{
    out << _value.toFloat();
    return out;
}
int Fixed::toInt(void) const
{
    return _value >> this->_fractionnal_bits;
}
float Fixed::toFloat(void) const
{
    return ((float) this->_value / (1 << this->_fractionnal_bits));
}
int Fixed::getRawBits(void) const
{
    return this->_value;
}
void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}
bool Fixed::operator>(Fixed const &fixed)
{
    return this->_value > fixed.getRawBits();
}
bool Fixed::operator<(Fixed const &fixed)
{
    return this->_value < fixed.getRawBits();
}
bool Fixed::operator>=(Fixed const &fixed)
{
    return this->_value >= fixed.getRawBits();
}
bool Fixed::operator<=(Fixed const &fixed)
{
    return this->_value <= fixed.getRawBits();
}
bool Fixed::operator==(Fixed const &fixed)
{
    return this->_value == fixed.getRawBits();
}
bool Fixed::operator!=(Fixed const &fixed)
{
    return this->_value != fixed.getRawBits();
}
Fixed Fixed::operator+(Fixed const &fixed)
{
    return Fixed(this->toFloat() + fixed.toFloat());
}
Fixed Fixed::operator-(Fixed const &fixed)
{
    return Fixed(this->toFloat() - fixed.toFloat());
}
Fixed Fixed::operator*(Fixed const &fixed)
{
    return Fixed(this->toFloat() * fixed.toFloat());
}
Fixed Fixed::operator/(Fixed const &fixed)
{
    return Fixed(this->toFloat() / fixed.toFloat());
}
Fixed &Fixed::operator++()
{
    this->_value++;
    return *this;
}
Fixed &Fixed::operator--()
{
    this->_value--;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed old = *this;
    ++(*this);
    return old;
}
Fixed Fixed::operator--(int)
{
    Fixed old = *this;
    --(*this);
    return old;
}
Fixed Fixed::max(Fixed const &a, Fixed const &b)
{
    return ((a.toFloat() > b.toFloat()) ? a : b);
}
Fixed Fixed::min(Fixed const &a, Fixed const &b) 
{
    return ((a.toFloat() > b.toFloat()) ? b : a);
}