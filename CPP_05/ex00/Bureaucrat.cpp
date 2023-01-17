#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(Bureaucrat &og):
	_name(og._name), _grade(og._grade)
{
	std::cout << "Bureaucrat copy constructor called\t" << "NAME: "
		<< this->_name << " GRADE: "<< this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade):
	_name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat default constructor called\t" << "NAME: "
		<< this->_name << " GRADE: "<< this->_grade << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called\t" << "NAME: "
		<< this->_name << " GRADE: "<< this->_grade << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

const std::string	Bureaucrat::getName(void) const
{
	return(this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return(this->_grade);
}

void	Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "incrementing: " << this->_name << std::endl;
	this->_grade -= 1;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "decrementing: " << this->_name << std::endl;
	this->_grade += 1;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat &a)
{
	o << "Bureaucrat: " << a.getName() << "\tGrade: " << a.getGrade() << std::endl;
	return (o);
}