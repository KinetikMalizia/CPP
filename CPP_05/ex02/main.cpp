#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat *chief = new Bureaucrat("C", 3);
	Bureaucrat *hand = new Bureaucrat("H", 22);
	PresidentialPardonForm	*f = new PresidentialPardonForm("Ge0rG3");
	try
	{
		f->execute(*chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		f->beSigned(*hand);
		f->execute(*hand);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		f->execute(*chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}