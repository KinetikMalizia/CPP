/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:29:34 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/30 10:29:34 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("Shrubbery Creation", 145, 137)
{
	this->_target = target;
	std::cout << "Shrubbery Creation form constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &og):
	Form(og), _target(og.getTarget())
{
	std::cout << "Shrubbery Creation form copy constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Creation Form destructor called\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getEGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getSigned() == 0)
		throw Form::NotSignedException();
	else
	{
		std::cout << "Creating " << this->_target << " shrubbery\n";
		this->executeAction();
	}
}

void ShrubberyCreationForm::executeAction() const
{
	std::ofstream out;

	out.open((this->getTarget() + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc);

	out << std::endl;
	out << "               ,@@@@@@@,                  " << std::endl;
	out << "       ,,,.   ,@@@@@@/@@,  .oo8888o.      " << std::endl;
	out << "    ,&&%&%&&%,@@@@@/@@@@@@,8888|88/8o     " << std::endl;
	out << "   ,%&|%&&%&&%,@@@|@@@/@@@88|88888/88'    " << std::endl;
	out << "   %&&%&%&/%&&%@@|@@/ /@@@88888|88888'    " << std::endl;
	out << "   %&&%/ %&&%&&@@| V /@@' `88|8 `/88'     " << std::endl;
	out << "   `&%| ` /%&'    |.|        | '|8'       " << std::endl;
	out << "       |o|        | |         | |         " << std::endl;
	out << "       |.|        | |         | |         " << std::endl;
	out << "    ||/ ._|//_/__/  ,|_//__||/.  |_//__/_ " << std::endl;
}