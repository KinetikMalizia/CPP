#ifndef WEAPON_HPP
# define Weapon_HPP
# include <string>
#include <iostream>

class Weapon
{
	private:
			std::string	_type;
	
	public:
			Weapon(std::string type);
			Weapon();
			~Weapon();
			std::string const &getType() const;
			void	setType(std::string new_type);
};

#endif