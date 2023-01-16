#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Creator called for: " << _type << std::endl;
}

Weapon::Weapon()
{
	std::cout << "Default Weapon creator called\n";
}

Weapon::~Weapon()
{
	std::cout << "Destructor called for: " << _type << std::endl;
}
std::string const &Weapon::getType() const
{
	return(this->_type);
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}