/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:27:50 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:27:51 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal *animals = new Animal[10];

	for (int i = 0; i < 10; i++) {
		if (i < 5)
			animals[i] = Dog();
		else
			animals[i] = Cat();
	}

	Dog snoopdog = Dog();
	Dog doggydog = Dog();

	snoopdog.getBrain()->addIdea("I want a car");
	snoopdog.getBrain()->addIdea("I want a drink");
	snoopdog.getBrain()->addIdea("I want a phone");

	doggydog = snoopdog;

	Dog hellodog = Dog(doggydog);

	std::cout << "DOGGYDOG: " << doggydog.getBrain()->getIdea(0) << std::endl;
	std::cout << "DOGGYDOG: " << doggydog.getBrain()->getIdea(1) << std::endl;
	std::cout << "DOGGYDOG: " << doggydog.getBrain()->getIdea(2) << std::endl;

	std::cout << "HELLODOG: " << doggydog.getBrain()->getIdea(0) << std::endl;
	std::cout << "HELLODOG: " << doggydog.getBrain()->getIdea(1) << std::endl;
	std::cout << "HELLODOG: " << doggydog.getBrain()->getIdea(2) << std::endl;

	delete [] animals;

	delete j;//should not create a leak
	delete i;
}