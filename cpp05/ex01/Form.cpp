/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:10:36 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/12 12:58:31 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
{}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	this->_isSigned = false;
}

Form::Form(Form const &cpy)
{
	this->_name = cpy.getName();
	this->_gradeToExec = cpy.getGradeToExec();
	this->_gradeToSign = cpy.getGradeToSign(); 
	this->_isSigned = false;
}

Form::~Form()
{}

Form &Form::operator=(Form const &cpy)
{
	this->_isSigned = cpy.isSigned();
	return *this;
}

void Form::beSigned(Bureaucrat const &Bureaucrat)
{
	if(this->_isSigned == true)
		throw is_signned();
	if (Bureaucrat.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();

	this->setSigned(true);
	std::cout << Bureaucrat.getName() << " signs " << this->getName() << std::endl;
}

std::string Form::getName() const
{
	return this->_name;
}

void Form::setName(std::string name)
{
	this->_name = name;
}

int Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

void Form::setGradeToSign(int value)
{
	this->_gradeToSign = value;
}

int Form::getGradeToExec() const
{
	return this->_gradeToExec;
}

void Form::setGradeToExec(int value)
{
	this->_gradeToExec = value;
}

bool Form::isSigned() const
{
	return this->_isSigned;
}

void Form::setSigned(bool state)
{
	this->_isSigned = state;
}

std::ostream &operator<<(std::ostream &out, const Form &yo)
{
	out << "[FORM " + yo.getName() + "]" << "Signed state: " << yo.isSigned() << " gradeToSign: " << yo.getGradeToSign() << " gradeToExec: " << yo.getGradeToExec();
	return out;
}