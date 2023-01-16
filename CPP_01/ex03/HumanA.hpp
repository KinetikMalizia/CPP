#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
			std::string	_name;
			Weapon		*_weapon;
	public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA();
			void	setWeapon(Weapon &weapon);
			Weapon	const *getWeapon(void);
			void	attack()const;
};

#endif