/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:23:51 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/30 10:23:51 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int s, int e): _name(name), _signed(0), _s_grade(s), _e_grade(e)
{
	if ( _s_grade < 1 )
		throw Bureaucrat::GradeTooHighException();
	if ( _s_grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Default form constructor called: " << _name << ", " << _signed << ", " << _s_grade << ", " << _e_grade << "\n";
}

Form::Form(Form &og): 
	_name(og.getName()), _signed(og.getSigned()), _s_grade(og.getSGrade()), _e_grade(og.getEGrade())
{
	std::cout << "Copy form constructor called: " << _name << ", " << _signed << ", " << _s_grade << ", " << _e_grade << "\n";
}

Form::~Form(void)
{
	std::cout << "Form destructor called: " << _name << ", " << _signed << ", " << _s_grade << ", " << _e_grade << "\n";
}

Form& Form::operator=(Form const &rhs)
{
	_signed = rhs.getSigned();
	return *this;
}

std::string	Form::getName(void) const
{
	return(this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int	Form::getSGrade(void) const
{
	return (this->_s_grade);
}

int	Form::getEGrade(void) const
{
	return (this->_e_grade);
}

void	Form::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() > this->_s_grade)
		throw Bureaucrat::GradeTooLowException();
	this->_signed = 1;
}

std::ostream&   operator<<( std::ostream& o, const Form& rhs ) {
	o << "------------- Form Info -------------" << std::endl;
	o << "Form name: " << rhs.getName() << std::endl
		<< "Grade to sign: " << rhs.getSGrade() << std::endl
		<< "Grade to execute: " << rhs.getEGrade();
	return o;
}
