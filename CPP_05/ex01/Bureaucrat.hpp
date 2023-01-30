/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:23:48 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/30 10:23:48 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
			const std::string	_name;
			int					_grade;
	public:
			Bureaucrat(Bureaucrat &og);
			Bureaucrat(const std::string name = "void", int grade = 150);
			~Bureaucrat();
			Bureaucrat	&operator=(Bureaucrat const &rhs);
			const std::string	getName() const;
			int			getGrade() const;
			void		setGrade(int grade);

			void		incrementGrade();
			void		decrementGrade();

			void		signForm(Form &form);

			/*Exception classes*/
			class GradeTooHighException : public std::exception
			{
				public:
					virtual const char* what() const throw() { return "Grade too high"; }
			};
			class GradeTooLowException : public std::exception
			{
				public:
					virtual const char* what() const throw() { return "Grade too low"; }
			};

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat &a);

#endif