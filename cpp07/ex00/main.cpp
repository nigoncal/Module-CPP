/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:12:11 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/16 14:52:18 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main ()

{

	int a = 2;
	int b = 3;
	
	std::cout<<"----|test avec les types int|----"<<std::endl<<std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl<<std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	::swap(a, b); // ne renvoie rien :(
	std::cout << "swap (a, b) = " << a << " , " << b << std::endl<<std::endl;
	

	std::cout<<"----|test avec les types floats|----"<<std::endl<<std::endl;

	float c = 14.2;
	float d = 15.44;

	std::cout << "c = " << c << ", d = " << d << std::endl<< std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	::swap(a, b); // ne renvoie rien :(
	std::cout << "swap (c, d) = " << c <<" , " << d << std::endl;

	return(0); 
}

