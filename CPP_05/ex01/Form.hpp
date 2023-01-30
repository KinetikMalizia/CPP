/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:23:56 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/30 10:23:56 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
			const std::string	_name;
			bool				_signed;
			const int			_s_grade;
			const int			_e_grade;
	public:
			Form(std::string name, int s, int e);
			Form(Form &og);
			~Form(void);
			Form &operator=(Form const &rhs);

			/*Getters*/
			std::string getName() const;
			bool		getSigned() const;
			int getSGrade() const;
			int getEGrade() const;

			void	beSigned(Bureaucrat &signer);
};

std::ostream&	operator<<( std::ostream& o, const Form& rhs );

#endif