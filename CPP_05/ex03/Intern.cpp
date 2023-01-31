/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:12:10 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/31 12:00:47 by fmalizia         ###   ########.ch       */
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

Intern& Intern::operator=(Intern& rhs)
{
	std::cout << "Ummm.... What are you trying to do?\n";
	return (*this);
}

static Form	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(const std::string form_to_create, const std::string target_for_form)
{
	Form *(*all_forms[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
	std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (form_to_create == forms[i])
		{
			std::cout << "Intern creates " << form_to_create << " now" << std::endl;
			return (all_forms[i](target_for_form));
		}
	}

	std::cout << "\033[33mIntern can not create a form called " << form_to_create << "\033[0m" << std::endl;
	return (NULL);
}
