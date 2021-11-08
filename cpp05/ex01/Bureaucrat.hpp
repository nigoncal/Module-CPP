/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:06:37 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/08 14:35:22 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef Bureaucrat_H
# define Bureaucrat_H

#include <iostream>


class Bureaucrat
{
	public :

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat &operator=(Bureaucrat const &copy);
	virtual ~Bureaucrat(void);
	
	void setName(std::string name);
	void setGrade(int value);

	std::string getName()const;
	int getGrade() const;

	void increment();
	void decrement();

	class gradeTooHightException : public std::exception 
	{
		public :
			virtual const char* what() const throw ()
			{
				return("grade too hight");
			}
	};
	
	class gradeTooLowException : public std::exception 
	{
		public :
			virtual const char* what() const throw ()
			{
				return("grade too low");
			}
	};

	private :
		std::string _name;
	 	int _grade;
	
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureau);

#endif