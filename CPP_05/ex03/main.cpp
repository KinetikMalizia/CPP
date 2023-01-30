/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:27:25 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/30 10:27:25 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf = someRandomIntern.makeForm("bloublou", "bob");
	delete rrf;
}