#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	private:
			std::string	_name;
			int			_hit;
			int			_energy;
			int			_attack;
	public:
			ClapTrap(std::string name);
			ClapTrap();
			~ClapTrap();
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

};

#endif