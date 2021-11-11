/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:50:06 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/10 14:01:33 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->_name = name;
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy)
{
	this->_name = cpy._name;
	this->_grade = cpy._grade;
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &cpy)
{
	this->_grade = cpy.getGrade();

	return *this;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

void Bureaucrat::setName(std::string name)
{
	this->_name = name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::setGrade(int value)
{
	if (value < 1)
		throw GradeTooHighException();
	if (value > 150)
		throw GradeTooLowException();
	this->_grade = value;
}

void Bureaucrat::increment()
{
	this->setGrade(this->getGrade() - 1 );
}

void Bureaucrat::decrement()
{
	this->setGrade(this->getGrade() + 1 );
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat)
{
	out << "<" + Bureaucrat.getName() + ">" << " bureaucrat grade <" << Bureaucrat.getGrade() << ">";
	return out;
}