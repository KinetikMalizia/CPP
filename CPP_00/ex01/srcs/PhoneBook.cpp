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
	int	i = 0;
	int	index = -1;

	if (_lastIndex == 0)
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
	while ((index < 0) || (index > MAX_CONTACTS - 1))
	{
		std::cout << "Please enter the index of the desired contact: ";
		if(std::cin >> index)
		{
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}
		if ((index < 0) || (index > MAX_CONTACTS - 1))
			std::cout << "The index: " << index << " is invalid\n";
	}
	_contacts[index].displayContactDetail();
	return ;
}

void	PhoneBook::printAll(void)
{
	int	i = 0;

	while (i < MAX_CONTACTS)
	{
		_contacts[i].displayContact();
		++i;
	}
}