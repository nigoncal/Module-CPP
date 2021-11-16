/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:12:02 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/16 14:12:08 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include "iostream"

template< typename Tmax>
Tmax max (Tmax const &x, Tmax const &y)
{
	if (x >= y)
		return (x);
	else
		return(y);
}

template< typename Tmin>
Tmin min (Tmin const &x, Tmin const &y)
{
	if (x <= y)
		return (x);
	else
		return(y);
}

template< typename Tswap>
void swap(Tswap &x, Tswap &y)
{
	Tswap tmp;

	tmp = x;
	x = y;
	y = tmp;
}

#endif