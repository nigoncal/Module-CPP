/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:06:35 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/08 14:41:05 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->_name = name;
	setGrade(grade);
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	this->_name = copy._name;
	this->_grade = copy._grade;
	return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
	*this = copy;
}

void Bureaucrat::setName(std::string name)
{
	this->_name = name;
}
void Bureaucrat::setGrade(int value)
{
	if(value <  1)
		throw gradeTooHightException();
	if(value > 150)
		throw gradeTooLowException();
	this->_grade = value;
}

std::string Bureaucrat::getName()const
{
	return(this->_name);
}

int Bureaucrat::getGrade() const
{
	return(this->_grade);
}

void Bureaucrat::increment()
{
	this->setGrade(this->getGrade() - 1 );
}

void Bureaucrat::decrement()
{
	this->setGrade(this->getGrade() + 1 );
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureau)
{
	return out << "<" + bureau.getName() + ">" << "bureaucrate grade <" << bureau.getGrade() << ">";
}