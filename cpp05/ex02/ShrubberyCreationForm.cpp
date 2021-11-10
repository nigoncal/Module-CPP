#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) 
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExec())
{
	this->_target = cpy.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &cpy)
{
	this->_target = cpy.getTarget();
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

void ShrubberyCreationForm::setTarget(std::string target)
{
	this->_target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream file(this->getTarget() + "_shrubbery");

	Form::execute(executor);

	if (file.fail())
		throw FileErrorException();
	
	std::string tree = 
			".{{}}}}}}.\n"
			"{{{{{{(`)}}}.\n"
		"{{{(`)}}}}}}}}}\n"
		"}}}}}}}}}{{(`){{{\n"
		"}}}}{{{{(`)}}{{{{\n"
		"{{{(`)}}}}}}}{}}}}}\n"
		"{{{{{{{{(`)}}}}}}}}}}\n"
		"{{{{{{{}{{{{(`)}}}}}}\n"
		" {{{{{(`)   {{{{(`)}'\n"
		"  (`)  /     \\ \n"
		" ~~~~~~~~~~~~~~~~~~~\n"
		" "
			".{{}}}}}}.\n"
			"{{{{{{(`)}}}.\n"
		"{{{(`)}}}}}}}}}\n"
		"}}}}}}}}}{{(`){{{\n"
		"}}}}{{{{(`)}}{{{{\n"
		"{{{(`)}}}}}}}{}}}}}\n"
		"{{{{{{{{(`)}}}}}}}}}}\n"
		"{{{{{{{}{{{{(`)}}}}}}\n"
		" {{{{{(`)   {{{{(`)}'\n"
		"  (`)  /     \\ \n"
		" ~~~~~~~~~~~~~~~~~~~\n"
		" " ;

	file << tree;

	file.close();
}