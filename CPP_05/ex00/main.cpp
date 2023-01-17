#include "Bureaucrat.hpp"


int	main(void)
{
	Bureaucrat bob("bob", 150);

	std::cout << bob;
	try
	{
		Bureaucrat steve("steve", 155);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat bobson("boboson", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/*Tests from gihub*/
	{
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("a", 150);
		std::cout << std::endl;

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << *a;

		try // in my opinion would make more sense if the try-catch blocks would have been inside the class itself already
		{
		a->incrementGrade();
		}
		catch(const std::exception& e) // the try-catch blocks inside the class are commented out but fully functional
		{
			std::cerr << "\033[33mIncrementing grade of " << a->getName() <<
			" failed: " << e.what() << "\033[0m" << std::endl;
		}

		std::cout << *a;

		try
		{
		a->decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << "\033[33mDecrementing grade of " << a->getName() <<
			" failed: " << e.what() << "\033[0m" << std::endl;
		}

		std::cout << *a;

		try
		{
		a->decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << "\033[33mDecrementing grade of " << a->getName() <<
			" failed: " << e.what() << "\033[0m" << std::endl;
		}

		std::cout << *a;
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	{
		std::cout << std::endl;
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("b", 1);
		std::cout << std::endl;
		std::cout << "\033[34mTesting\033[0m" << std::endl;
		std::cout << *a;

		try
		{
		a->decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << "\033[33mDecrementing grade of " << a->getName() <<
			" failed: " << e.what() << "\033[0m" << std::endl;
		}

		std::cout << *a;

		try
		{
		a->incrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << "\033[33mIncrementing grade of " << a->getName() <<
			" failed: " << e.what() << "\033[0m" << std::endl;
		}

		std::cout << *a;

		try
		{
		a->incrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << "\033[33mIncrementing grade of " << a->getName() <<
			" failed: " << e.what() << "\033[0m" << std::endl;
		}

		std::cout << *a;
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
		delete a;
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	{
		std::cout << std::endl;
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = NULL;

		try
		{
			a = new Bureaucrat("c", 0);
		}
		catch(const std::exception& e)
		{
			std::cerr << "\033[33mConstructing default failed: " <<
			e.what() << "\033[0m" << std::endl;
		}

		if (a != NULL)
		{
			std::cout << std::endl;

			std::cout << "\033[34mDeconstructing b\033[0m" << std::endl;
			delete a;
		}

		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	{
		std::cout << std::endl;
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = NULL;

		try
		{
			a = new Bureaucrat("d", 160);
		}
		catch(const std::exception& e)
		{
			std::cerr << "\033[33mConstructing default failed: " <<
			e.what() << "\033[0m" << std::endl;
		}

		if (a != NULL)
		{
			std::cout << std::endl;
			std::cout << "\033[34mDeconstructing b\033[0m" << std::endl;
			delete a;
		}
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------------------------" << std::endl;
	{
		std::cout << std::endl;
		std::cout << "\033[34mConstructing\033[0m" << std::endl;
		Bureaucrat *a = new Bureaucrat("Peter", 120);
		std::cout << std::endl;

		std::cout << "\033[34mTesting a\033[0m" << std::endl;
		std::cout << *a;

		a->decrementGrade();

		std::cout << *a;
		std::cout << std::endl;

		std::cout << "\033[34mConstructing b\033[0m" << std::endl;
		Bureaucrat *b = new Bureaucrat(*a);
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing a\033[0m" << std::endl;
		delete a;
		std::cout << std::endl;

		std::cout << "\033[34mTesting b\033[0m" << std::endl;
		std::cout << *b;
		b->decrementGrade();
		std::cout << *b;
		std::cout << std::endl;

		std::cout << "\033[34mDeconstructing b\033[0m" << std::endl;
		delete b;

		std::cout << std::endl;
	}
}
