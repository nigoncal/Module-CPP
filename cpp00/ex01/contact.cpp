/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:55:07 by nigoncal          #+#    #+#             */
/*   Updated: 2021/10/06 12:55:08 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include"contact.hpp"

std::string contact::get_first_name() const
{
	return(this->_first_name);
}
std::string contact::get_last_name() const
{
	return(this->_last_name);
}
std::string contact::get_nickname() const
{
	return(this->_nickname);
}
std::string contact::get_phone_number() const
{
	return(this->_phone_number);
}
std::string contact::get_darkest_secret() const
{
	return(this->_darkest_secret);
}

void	contact::set_attribute()
{	
	std::cout<<"First name : ";
	std::cin.ignore();
	std::getline(std::cin, this->_first_name);
	std::cout<<"Last name : ";
	std::getline(std::cin, this->_last_name);
	std::cout<<"Nickname : ";
	std::getline(std::cin, this->_nickname);
	std::cout<<"Phone_number : ";
	std::getline(std::cin, this->_phone_number);
	std::cout<<"Darknest_secret : ";
	std::getline(std::cin, this->_darkest_secret);
}

void contact::print_attribute() const
{
	std::cout<<std::endl;
	std::cout<<"*******************"<<std::endl<<std::endl;
	std::cout<<"First name : ";
	std::cout << this->_first_name<<std::endl;
	std::cout<<"Last name : ";
	std::cout << this->_last_name<<std::endl;
	std::cout<<"Nickname : ";
	std::cout << this->_nickname<<std::endl;
	std::cout<<"Phone_number : ";
	std::cout << this->_phone_number<<std::endl;
	std::cout<<"Darknest_secret : ";
	std::cout << this->_darkest_secret<<std::endl<<std::endl;
	std::cout<<"*******************"<<std::endl;
}
