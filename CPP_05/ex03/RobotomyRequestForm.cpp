#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("Robotomy Request", 72, 45)
{
	this->_target = target;
	std::cout << "Robotomy Request form constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &og):
	Form(og), _target(og.getTarget())
{
	std::cout << "Robotomy Request form copy constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Request Form destructor called\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getEGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (this->getSigned() == 0)
		throw Form::NotSignedException();
	else
	{
		std::cout << "@|§¬° DRILL NOISES $¨]2" << std::endl;
		if (std::rand() % 2 == 0)
			std::cout << this->_target << " has been succesfully robotomized\n";
		else
			std::cout << this->_target << " wasnt affected\n";
	}
}
