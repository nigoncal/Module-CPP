/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:08:58 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/17 12:08:59 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> numI(5); // test avec type int, on type le template
	Array <int> error(0);
	Array<float> numF(10);

	std::cout<<"---test du parsing []---"<<std::endl;
	try
	{
		error[0] = 15;
		std::cout << error[2];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout<<"---Test d'un tableau d'int---"<<std::endl<<std::endl;

	try
	{
		numI[0] = 15;
		numI[1] = 2;
		numI[2] = 150458;
		numI[3] = -1;
		for(int i = 0; i != 4; i++)
		std::cout << numI[i] << std::endl;
		std::cout <<std::endl<<"size du tableau : "<<  numI.size() << std::endl<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		std::cout<<"---Test d'un tableau de float----"<<std::endl<<std::endl;

	try
	{
		numF[0] = 15.65;
		numF[1] = 255.5848;
		numF[2] = 0;
		numF[3] = -1.546;
		for(int i = 0; i != 4; i++)
		std::cout << numF[i] << std::endl;
		std::cout << numF.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	



}