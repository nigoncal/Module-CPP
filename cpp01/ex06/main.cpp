/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:43:59 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/18 13:55:16 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"Karen.hpp"

int main (int ac, char **av)
{
	Karen karen;
	
	if(ac != 2)
	{
		std::cout<<"usage : ./karen level";
		return(0);
	}
	else
	{
		karen.complain(av[1]);
	}
}