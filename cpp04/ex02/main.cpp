/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:29:27 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/05 11:03:13 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	AAnimal *dog = new Dog();
	AAnimal *cat = new Cat();
	
	//AAnimal salut;
	
	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;
}