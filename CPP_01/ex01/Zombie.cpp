#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << _name << ": named constructor called\n";
}

Zombie::Zombie()
{
	std::cout << "regular constructor called\n";
	return;
}

Zombie::~Zombie()
{
	std::cout << _name << ": has been destroyed\n";
	return ;
}

void	Zombie::announce() const
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ...\n";
	return ;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}