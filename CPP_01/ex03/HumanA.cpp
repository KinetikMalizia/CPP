#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name)
{
	this->_weapon = &weapon;
	std::cout << _name << ": has been created\n";
}

HumanA::~HumanA(void)
{
	std::cout << _name << ": has been destroyed\n";
}

void	HumanA::attack(void)const
{
	std::cout << this->_name << " attacks with their "
			<< this->_weapon->getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

Weapon	const *HumanA::getWeapon(void)
{
	return (this->_weapon);
}