#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	try 
	{
		Bureaucrat bureaucrat("ash",11);
		Form form("Formulary", 10, 20);
		bureaucrat.signForm(form);

		std::cout << form << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-------------------------------------------------\n\n";
	try 
	{
		Bureaucrat bureaucrat("steven", 2);
		Form form("Formulary", 10, 20);

		bureaucrat.signForm(form);

		std::cout << form << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}