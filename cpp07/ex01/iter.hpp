/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:55:40 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/16 15:40:47 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include "iostream"

template <typename T>
void iter(T *tab, unsigned int lenght, void(*fct)(T const &elem))
{
	for (unsigned int i = 0; i < lenght; i++)
	{
		fct(tab[i]);
	}
}

#endif