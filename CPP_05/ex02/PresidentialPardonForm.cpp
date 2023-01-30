/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:25:59 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/30 10:25:59 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("Presidential Pardon", 25, 5)
{
	this->_target = target;
	std::cout << "Presidential Pardon form constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &og):
	Form(og), _target(og.getTarget())
{
	std::cout << "Presidential Pardon form copy constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidentail Pardon Form destructor called\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getEGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getSigned() == 0)
		throw Form::NotSignedException();
	else {
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}
