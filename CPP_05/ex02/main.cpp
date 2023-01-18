#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	Bureaucrat *chief = new Bureaucrat("C", 3);
	Bureaucrat *hand = new Bureaucrat("H", 22);
	PresidentialPardonForm	*f = new PresidentialPardonForm("Ge0rG3");
	RobotomyRequestForm		*r = new RobotomyRequestForm("Gr3g0Ry");
	std::cout << "\n\n\n\n";
	try
	{
		f->execute(*chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 1: " << e.what() << '\n';
	}

	try
	{
		f->beSigned(*hand);
		f->execute(*hand);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 2: " << e.what() << '\n';
	}
	
	try
	{
		f->execute(*chief);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 3: " << e.what() << '\n';
	}
	std::cout << "\n\n\n\n";
	try
	{
		r->beSigned(*hand);
		r->execute(*hand);
		r->execute(*hand);
		r->execute(*hand);
		r->execute(*hand);
		r->execute(*hand);
	}
	catch(const std::exception& e)
	{
		std::cerr << "err 4: " << e.what() << '\n';
	}
	std::cout << "\n\n\n\n";
	delete chief;
	delete hand;
	delete f;
	delete r;
	std::cout << "\n\n\n\n";
	return (0);
}