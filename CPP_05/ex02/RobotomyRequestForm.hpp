#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	private:
			std::string	_target;
	public:
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(RobotomyRequestForm &og);
			~RobotomyRequestForm();

			RobotomyRequestForm& operator=( const RobotomyRequestForm& rhs );

			std::string	getTarget() const;

			void	execute(Bureaucrat &executor) const;
};


#endif