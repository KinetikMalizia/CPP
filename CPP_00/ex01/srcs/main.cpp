#include "../includes/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	command;

	while (command != "EXIT")
	{
		std::cout << "Enter your command: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (1);
		}
		if (command == "EXIT")
			return (0);
		if (command == "ADD")
			book.addContact();
		else if (command == "SE")
			book.searchContact();
		else if (command == "SHOW")
			book.printAll();
		else
			std::cout << "No command named: \"" << command
				<< "\" please use ADD SEARCH or EXIT\n";
	}

}