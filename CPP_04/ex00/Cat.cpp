#include "Cat.hpp"

Cat::Cat(Cat &og) : Animal(og.getType())
{
		std::cout << "Cat copy constructor called\n";
}

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

Cat	&Cat::operator=(Cat &rhs)
{
	this->_type = rhs._type;
}

void	Cat::makeSound()
{
	std::cout << this->_type << ": !!!Mighty Roar!!!\n";
}