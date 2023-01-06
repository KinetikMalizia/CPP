#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):
	ClapTrap(name, 100, 50, 20)
{
	std::cout <<this->_name << ": ST Named constructor called\n";
}


ScavTrap::ScavTrap(ScavTrap const& og):
	ClapTrap(og._name, og._hit, og._energy, og._attack)
{
	std::cout << this->_name << ": ST Copy constructor called\n";
}

ScavTrap::ScavTrap() :
	ClapTrap("", 100, 50, 20)
{
		std::cout << "ST Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << ": ST Destructor called\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy < 1 || this->_hit < 1)
	{
		std::cout << "ScavTrap " << this->_name << " has no more energy\n";
		return ;
	}
	this->_energy -= 1;
	std::cout << "ScavTrap " << this->_name << " uses laser beam on "
		<< target << " and causes " << this->_attack << " damage to their armor" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << this->_name << " is now in G4TEK33P1NG mode\n";
}