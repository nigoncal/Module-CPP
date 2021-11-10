#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	Intern someRandomIntern;
	Form* rrf = nullptr;
	Form* ppf = nullptr;

	try {
		Bureaucrat bob = Bureaucrat("Bobby", 2);

		rrf = someRandomIntern.makeForm("robotomy", "Bender");
		ppf = someRandomIntern.makeForm("presidential", "Obama");

		std::cout << " -- --- -- " << std::endl;

		bob.signForm(*rrf);
		bob.executeForm(*rrf);

		std::cout << " -- --- -- " << std::endl;

		bob.signForm(*ppf);
		bob.executeForm(*ppf);

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	if (nullptr != rrf)
		delete rrf;
	if (nullptr != ppf)
		delete ppf;
}