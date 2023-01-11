#ifndef WrongCat_HPP
# define WrongCat_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
			WrongCat(WrongCat &og);
			WrongCat();
			~WrongCat();
			WrongCat &operator=(WrongCat &rhs);
			void makeSound() const;
};

#endif