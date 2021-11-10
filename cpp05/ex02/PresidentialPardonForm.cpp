#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) 
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExec())
{
	this->_target = cpy.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &cpy)
{
	this->_target = cpy.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

void PresidentialPardonForm::setTarget(std::string target)
{
	this->_target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	srand (time(NULL));
	if (rand() % 2)
	{
		std::cout << "Bzzzzbzzbzbzbzbz .." << std::endl;
		std::cout << executor.getName() + " has been robomized \\/" << std::endl;
	}
	else
		std::cout << "Robimization failed :(" << std::endl;
}