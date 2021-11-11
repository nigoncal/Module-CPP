/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:11:36 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/11 16:11:37 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &cpy);

		std::string getTarget() const;
		void setTarget(std::string target);

		void execute(Bureaucrat const &executor) const;

		class FileErrorException : public std::exception {
			public:
				virtual const char* what() const throw ()
				{
					return "Error with file.";
				}
		};

	private:
		RobotomyRequestForm();

		std::string _target;
};

#endif