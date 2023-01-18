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