/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:06:37 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/02 16:06:59 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRATE_H
# define BUREAUCRATE_H

#include <iostream>

class Bureaucrate
{
	public :

	Bureaucrate(void);
	Bureaucrate(Bureaucrate const &copy);
	Bureaucrate &operator=(Bureaucrate const &copy);
	virtual ~Bureaucrate(void);
	
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