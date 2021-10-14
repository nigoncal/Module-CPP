/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:04:17 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/11 11:41:17 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main (void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strPtr = &str;
	std::string& strRef = str;

	std::cout<<"PTR adress : " <<std::hex <<strPtr << std::endl; 
	std::cout<<"PTR adress : " <<std::hex <<&strPtr << std::endl; 
	
	std::cout<< *strPtr << std::endl;
	std::cout<< strRef << std::endl;
}