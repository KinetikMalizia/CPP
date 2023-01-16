#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
	private:
			std::string _name;
	public:
			Zombie(std::string name);
			Zombie();
			~Zombie();
			void	announce(void) const;
			std::string	getName(void);
			void		setName(std::string	name);
};

Zombie* zombieHorde(int N, std::string name);

#endif