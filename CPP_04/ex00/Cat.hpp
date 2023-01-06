#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	private:
			std::string	_type;
	public:
			Cat(Cat &og)
			Cat();
			~Cat();
			Cat &operator=(Cat &rhs);
			void makeSound();
}

#endif