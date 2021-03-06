/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nigoncal <nigoncal@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:10:40 by nigoncal          #+#    #+#             */
/*   Updated: 2021/11/12 11:57:29 by nigoncal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
	public: 
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(Form const &cpy);
		virtual ~Form();
		Form &operator=(Form const &cpy);

		void beSigned(Bureaucrat const &brt);

		std::string getName() const;
		void setName(std::string name);

		int getGradeToSign() const;
		void setGradeToSign(int value);

		int getGradeToExec() const;
		void setGradeToExec(int value);

		bool isSigned() const;
		void setSigned(bool state);
	
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw ()
				{
					return "Grade to high.";
				}
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw ()
				{
					return "Grade to low.";
				}
		};
		class is_signned : public std::exception {
			public:
				virtual const char* what() const throw ()
				{
					return "form is already signed";
				}
		};

	private:
		Form();

		std::string _name;
		bool _isSigned;
		int _gradeToSign;
		int _gradeToExec;
};

std::ostream &operator<<(std::ostream &out, const Form &yo);

#endif