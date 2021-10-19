/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:50:06 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/19 16:10:25 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

int main (void)
{
	Fixed a;
    std::cout << a.getRawBits() << std::endl;
    a.setRawBits(21);
    std::cout << a.getRawBits() << std::endl;
    Fixed b( a );
    std::cout << b.getRawBits() << std::endl;
    b.setRawBits(42);
    Fixed c;
    c = b;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}

