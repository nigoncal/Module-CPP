#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &cpy);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &cpy);

		std::string getName() const;
		void setName(std::string name);
		int	getGrade() const;
		void setGrade(int value);
		void increment();
		void decrement();
		void signForm(Form &form);

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

	private:
		Bureaucrat();

		std::string _name;
		int	_grade;

};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &yo);

#endif