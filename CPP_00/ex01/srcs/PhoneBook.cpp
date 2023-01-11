#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_lastIndex = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	displayHeader(void)
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;
	
}

void	PhoneBook::addContact(void)
{
	if (_lastIndex > MAX_CONTACTS - 1)
		_lastIndex = 0;
	_contacts[_lastIndex].fillContact(_lastIndex);
	_lastIndex += 1;
	return;
}

void	PhoneBook::searchContact(void)const
{
	int			i = 0;
	int			index = -1;
	std::string	entry;

	if (_contacts[0].getIndex() < 0)
	{
		std::cout << "The phonebook is empty!\n";
		return ;
	}
	displayHeader();
	while (i < MAX_CONTACTS)
	{
		_contacts[i].displayContact();
		++i;
	}
	while ((index < 0) || (index >= MAX_CONTACTS))
	{
		std::cout << "Please enter the index of the desired contact: ";
		std::cin >> index;
		std::cin.clear();
		std::cin.ignore(100, '\n');
		if ((index < 0) || (index >= MAX_CONTACTS))
			std::cout << "The index: " << index << " is invalid\n";
	}
	std::cout << "index:" << index << std::endl;
	_contacts[index].displayContactDetail();
	return ;
}
