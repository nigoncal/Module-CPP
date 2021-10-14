/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:18:19 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/13 12:48:59 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>
#include <cstring>

int main (int c, char **v)
{
	if(c != 4)
	{
		std::cout<<"wrong number of arguments"<<std::endl;
		return(0);
	}
	std::ifstream in(v[1]); // fichier pris en entree
	
	if(!in)
	{
		std::cout<<"can't open the file"<<std::endl;
		return(0);
	}
		std::ofstream out((v[1] + std::string("output")));
	if(!out)
	{
		std::cout<<"can't create the file"<<std::endl;	
		return(0);
	}


std::string line; 
size_t position = 0;
int size = std::strlen(v[2]);

while(std::getline(in, line))
{
	while(1)
	{
		position = line.find(v[2]);
		if (position == std::string::npos)
			break;
		else
			line.replace(position, size, v[3]);
	}
		out << line << std::endl;
}
	return(0);
 


}