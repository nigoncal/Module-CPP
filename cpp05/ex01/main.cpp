#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat bob = Bureaucrat("Bob", 21);

	Form carForm = Form("CarForm", 20, 5);

	std::cout << bob << std::endl << std::endl;

	bob.signForm(carForm);

	try {
		carForm.beSigned(bob);
	} catch (std::exception &e) {
		std::cout << bob.getName() << " cannot sign " << carForm.getName() << " because this grade is too low." << std::endl;
	}

	bob.setGrade(1);

	std::cout << std::endl << bob << std::endl << std::endl;
	bob.signForm(carForm);

	try {
		carForm.beSigned(bob);
	} catch (std::exception &e) {
		std::cout << bob.getName() << " cannot sign " << carForm.getName() << " because this grade is too low." << std::endl;
	}
}