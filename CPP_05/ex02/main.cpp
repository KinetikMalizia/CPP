/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:25:46 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/30 10:25:46 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat *chief = new Bureaucrat("C", 3);
	Bureaucrat *hand = new Bureaucrat("H", 22);
	PresidentialPardonForm	*f = new PresidentialPardonForm("Ge0rG3");
	RobotomyRequestForm		*r = new RobotomyRequestForm("Gr3g0Ry");
	ShrubberyCreationForm	*s = new ShrubberyCreationForm("file");
	std::cout << "\n\n\n\n";
	try
	{
		f->execute(*chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 1: " << e.what() << '\n';
	}

	try
	{
		f->beSigned(*hand);
		f->execute(*hand);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 2: " << e.what() << '\n';
	}
	std::cout << "------Execute Form-------\n\n";
	try
	{
		f->beSigned(*hand);
		hand->executeForm(*f);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 2: " << e.what() << '\n';
	}

	hand->executeForm(*f);
	chief->executeForm(*f);

	try
	{
		f->execute(*chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 3: " << e.what() << '\n';
	}
	std::cout << "\n\n\n\n";
	try
	{
		r->beSigned(*hand);
		r->execute(*hand);
		r->execute(*hand);
		r->execute(*hand);
		r->execute(*hand);
		r->execute(*hand);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 4: " << e.what() << '\n';
	}
	std::cout << "\n\n\n\n";
	try
	{
		s->beSigned(*hand);
		s->execute(*chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 5: "<< e.what() << '\n';
	}
	std::cout << "\n\n\n\n";
	delete chief;
	delete hand;
	delete f;
	delete r;
	delete s;
	std::cout << "\n\n\n\n";
	return (0);
}