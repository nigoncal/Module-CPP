#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &cpy);
		virtual ~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &cpy);

		std::string getName() const;
		void setName(std::string name);
		int	getGrade() const;
		void setGrade(int value);
		void increment();
		void decrement();

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