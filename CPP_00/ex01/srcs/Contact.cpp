#include "../includes/Contact.hpp"

Contact::Contact(void)
{
	_index = -1;
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::fillContact(int index)
{
	_index = index;
		
	do
	{
		std::cout << "First Name: ";
		std::getline(std::cin, _firstName);
	}
	while(_firstName.empty());
	do
	{
		std::cout << "Last Name: ";
		std::getline(std::cin, _lastName);
	}
	while(_lastName.empty());
	do
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, _nickname);
	}
	while(_nickname.empty());
	do
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, _phoneNumber);
	}
	while(_phoneNumber.empty());
	do
	{
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, _secret);
	}
	while(_secret.empty());
}

std::string	shorten(std::string str)
{
	if (str.length() <= 10)
		return (str);
	str = str.substr(0, 9);
	str += '.';
	return (str);
}

void	Contact::displayContact(void)const
{
	if (_index < 0)
		return ;
	std::cout << std::setw(10) << _index << "|";
	std::cout << std::setw(10) << shorten(_firstName) << "|";
	std::cout << std::setw(10) << shorten(_lastName) << "|";
	std::cout << std::setw(10) << shorten(_nickname) << "|" << std::endl;
	return ;
}

void	Contact::displayContactDetail(void)const
{
	if (_index < 0)
	{
		std::cout << "This contact is empty!\n";
		return ;
	}
	std::cout << "---- Contact " << _index << " ----" << std::endl;
	std::cout << "First Name: " << _firstName << std::endl;
	std::cout << "Last Name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone: " << _phoneNumber << std::endl;
	std::cout << "Darkest secret:  " << _secret << std::endl;
}
