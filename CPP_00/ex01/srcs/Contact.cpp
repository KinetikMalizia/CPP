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
	std::cout << "First Name: ";
	std::getline(std::cin, _firstName);
	std::cout << "Last Name: ";
	std::getline(std::cin, _lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, _nickname);
	std::cout << "Phone Number: ";
	std::getline(std::cin, _phoneNumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, _secret);
}

void	Contact::displayContact(void)const
{
	if (_index < 0)
		return ;
	std::cout << std::setw(10) << _index << "|";
	std::cout << std::setw(10) << _firstName.substr(0, 10) << "|";
	std::cout << std::setw(10) << _lastName.substr(0, 10) << "|";
	std::cout << std::setw(10) << _nickname.substr(0, 10) << "|" << std::endl;
	return ;
}

void	Contact::displayContactDetail(void)const
{
	if (_index < 0)
		return ;
	std::cout << "---- Contact " << _index << " ----" << std::endl;
	std::cout << "First Name: " << _firstName << std::endl;
	std::cout << "Last Name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone: " << _phoneNumber << std::endl;
	std::cout << "Darkest secret:  " << _secret << std::endl;
}