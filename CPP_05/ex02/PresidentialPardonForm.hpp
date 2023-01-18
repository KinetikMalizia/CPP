#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	private:
			std::string	_target;
	public:
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm(PresidentialPardonForm &og);
			~PresidentialPardonForm();

			PresidentialPardonForm& operator=( const PresidentialPardonForm& rhs );

			std::string	getTarget() const;

			void	execute(Bureaucrat &executor) const;
};


#endif