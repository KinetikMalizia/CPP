#include "Animal.hpp"

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal type constructor called\n";
}

Animal::Animal(Animal const &og)
{
	this->_type = og._type;
	std::cout << "Animal copy constructor called\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal destrucor called\n";
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->_type = rhs._type;
}

std::string	Animal::getType()
{
	return (this->_type);
}

void	Animal::makeSound(void)
{
	std::cout << "...Generic animal sound...\n";
}