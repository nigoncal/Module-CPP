/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:06:37 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/03 09:40:18 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef Bureaucrat_H
# define Bureaucrat_H

#include <iostream>


class Bureaucrat
{
	public :

	Bureaucrat(void);
	Bureaucrat(Bureaucrat const &copy);
	Bureaucrat &operator=(Bureaucrat const &copy);
	virtual ~Bureaucrat(void);
	
	void setName(std::string name);
	void setGrade(int value);

	std::string getName()const;
	int getGrade() const;

	void increment();
	void decrement();

	private :
		std::string _name;
	 	int _grade;
	
};

#endif