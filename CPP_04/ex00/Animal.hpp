#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
				std::string	_type;
	public:
			Animal(std::string type = "Animal");
			Animal(Animal const &og);
			virtual ~Animal();
			Animal& operator=(Animal const &rhs);
			std::string getType();
			virtual void makeSound() = 0;
};

#endif