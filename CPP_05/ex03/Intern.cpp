/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:12:10 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/23 14:37:40 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(Intern &og)
{
	(void)og;
	std::cout << "Intern copy constructor called\n";
}

Intern::Intern()
{
	std::cout << "Intern default constructor called\n";
}

Intern::~Intern()
{
	std::cout << "Intern destructor called\n";
}

Form* Intern::makeForm(std::string name, std::string target)
{
	std::string formNames[] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};
	Form*	forms[] = {
		new RobotomyRequestForm( target ),
		new PresidentialPardonForm( target ),
		new ShrubberyCreationForm( target )
	};
	for ( int i(0); i < 3; i++ ) {
		if ( name == formNames[i] ) {
			std::cout << "Intern creates " << name << std::endl;
			return forms[i];
		}
	}
	std::cout << "Intern cannot create " << name << " form" << std::endl;
	return nullptr;
}