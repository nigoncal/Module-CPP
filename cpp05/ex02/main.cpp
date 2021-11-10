#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat bob("Bob", 1);
	ShrubberyCreationForm shrub("Shrub");
	PresidentialPardonForm obama("Obama");
	RobotomyRequestForm bender("Bender");

	bob.signForm(shrub);
	bob.signForm(obama);
	bob.signForm(bender);

	bob.executeForm(shrub);

	try {
		shrub.execute(bob);
		obama.execute(bob);
		bender.execute(bob);


	} catch (std::exception &e) {
		std::cout << "You can't execute this form because : " << e.what() << std::endl;
	}
}