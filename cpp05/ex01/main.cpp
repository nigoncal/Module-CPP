/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:49:16 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/08 14:38:37 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Bureaucrat.hpp"
int main()
{
    Bureaucrat bob = Bureaucrat("Bob", 20);
    std::cout << bob << std::endl << std::endl;
    std::cout << "- Set grade to 809 - " << std::endl;
    try {
        bob.setGrade(809);
    } catch (std::exception &e) {
        std::cout << "ERROR: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "- Set grade to 0 - " << std::endl;
    try {
        bob.setGrade(0);
    } catch (std::exception &e) {
        std::cout << "ERROR: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "- Set grade to 5 - " << std::endl;
    try {
        bob.setGrade(5);
    } catch (std::exception &e) {
        std::cout << "ERROR: " << e.what() << std::endl;
    }
    std::cout << bob << std::endl << std::endl;
    std::cout << "- decrement 150x -" << std::endl;
    try {
        for (int i = 0; i < 150; i++) {
            bob.decrement();
        }
    } catch (std::exception &e) {
        std::cout << bob << std::endl;
        std::cout << "ERROR: " << e.what() << std::endl << std::endl;
    }
    std::cout << "- increment 150x -" << std::endl;
    try {
        for (int i = 0; i < 150; i++) {
            bob.increment();
        }
    } catch (std::exception &e) {
        std::cout << bob << std::endl;
        std::cout << "ERROR: " << e.what() << std::endl;
    }
}