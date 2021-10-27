/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:40:26 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/27 13:01:52 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed {
    public:
        Fixed(void);
        Fixed(const Fixed& copy);
        Fixed(float val);
        Fixed(int val);
        ~Fixed(void);

        float toFloat(void) const;
        int toInt(void) const;

        void operator=(const Fixed& a);
        bool operator>(Fixed const &fixed);
        bool operator<(Fixed const &fixed);
        bool operator>=(Fixed const &fixed);
        bool operator<=(Fixed const &fixed);
        bool operator==(Fixed const &fixed);
        bool operator!=(Fixed const &fixed);
	
        Fixed operator+(Fixed const &fixed);
        Fixed operator-(Fixed const &fixed);
        Fixed operator*(Fixed const &fixed);
        Fixed operator/(Fixed const &fixed);
        Fixed &operator++(); //increment
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed max(Fixed const &a, Fixed const &b);
        static Fixed min(Fixed const &a, Fixed const &b);
	
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int                 _value;
        const static int    _fractionnal_bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
#endif