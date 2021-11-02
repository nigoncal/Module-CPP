/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:28:52 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 12:28:53 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < MAX_IDEAS; i++) {
		this->ideas[i] = "";
	}

	std::cout << "Brain initialized" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	for (int i = 0; i < MAX_IDEAS; i++) {
		this->ideas[i] = copy.ideas[i];
	}
}

Brain &Brain::operator=(Brain const &copy)
{
	for (int i = 0; i < MAX_IDEAS; i++) {
		this->deleteIdea(i);
		this->ideas[i] = copy.ideas[i];
	}
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destroyed" << std::endl;
}

void Brain::addIdea(std::string idea)
{
	int slot = -1;

	for (int i = 0; i < MAX_IDEAS; i++) {
		if (this->ideas[i].empty()) {
			slot = i;
			break ;
		}
	}
	if (slot != -1)
		this->ideas[slot] = idea;
}

std::string Brain::getIdea(int index)
{
	if (this->ideas[index].empty()) {
		return "";
	}

	return this->ideas[index];
}

void	Brain::deleteIdea(int index)
{
	if (!this->ideas[index].empty()) {
		this->ideas[index] = "";
	}
	(void)index;
}

void	Brain::showIdeas(void)
{
	for (int i = 0; i < MAX_IDEAS; i++) {
		if (!this->ideas[i].empty()) {
			std::cout << this->ideas[i] << std::endl;
		}
	}
}