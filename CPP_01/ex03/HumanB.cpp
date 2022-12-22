#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
	std::cout << this->_name << ": has been created\n";
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << ": has been destroyed\n";
}

void	HumanB::attack(void)const
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with their "
			<< (*(this->_weapon)).getType() << std::endl;
	}
	else
	{
		std::cout << this->_name << " tries to attack but has no weapon"
			<< std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}