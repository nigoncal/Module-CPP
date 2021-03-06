/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:54:44 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/06 12:55:25 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	int i;

	i = 1;
	if(argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while(i != argc)
		{
			for(int j = 0; argv[i][j] != '\0'; j++)
				std::cout<<(char)toupper(argv[i][j]);
			i++;
		}
	std::cout<<std::endl;
}