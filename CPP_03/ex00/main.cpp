#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("BoB");
	ClapTrap	b("Steve");
	ClapTrap	c;
	ClapTrap	d(a);

	c = b;
	a.attack("Steve");
	b.attack("BOB");
	c.takeDamage(3);
	a.beRepaired(2);
	a.takeDamage(3);
	a.takeDamage(33);
	return (0);
}