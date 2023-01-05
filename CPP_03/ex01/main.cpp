#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	ScavTrap	a("Bop");
	//ScavTrap	b(a);
	ScavTrap	c;

	c = a;
	a.attack("steve");
	a.guardGate();
	c.takeDamage(8);
}