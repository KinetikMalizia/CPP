#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	protected:
			std::string	_name;
			int			_hit;
			int			_energy;
			int			_attack;
	public:
			ClapTrap(std::string name, int hit, int energy, int attack);
			ClapTrap(std::string name);
			ClapTrap(ClapTrap& og);
			ClapTrap();
			~ClapTrap();
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			ClapTrap& operator=(ClapTrap& rhs);
};

#endif