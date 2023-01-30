/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:29:38 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/30 10:29:38 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	private:
			std::string	_target;
	public:
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(ShrubberyCreationForm &og);
			~ShrubberyCreationForm();

			ShrubberyCreationForm& operator=( const ShrubberyCreationForm& rhs );

			std::string	getTarget() const;

			void	execute(Bureaucrat &executor) const;
			void	executeAction() const;
};


#endif