#include "WrongCat.hpp"

WrongCat::WrongCat(WrongCat &og) : WrongAnimal(og.get_type())
{
		std::cout << "WrongCat copy constructor called\n";
}

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

WrongCat	&WrongCat::operator=(WrongCat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << this->_type << ": !!! Laser Beam noise !!!\n";
}