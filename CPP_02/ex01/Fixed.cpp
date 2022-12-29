#include "Fixed.hpp"

Fixed::Fixed(Fixed const& original)
{
	*this = original;
	std::cout << "Copy contructor called\n";
}

Fixed::Fixed(const int integer)
{
	this->setRawBits(integer << this->_bits);
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float flo)
{
	this->setRawBits((int)roundf(flo * (1 << this->_bits)));
	std::cout << "Floating-point constructor called\n";
}

Fixed::Fixed(void)
{
	this->_value = 0;
	std::cout << "Default constuctor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destuctor called\n";
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
	setRawBits(rhs.getRawBits());
	std::cout << "Copy assignement operator called\n";
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	float	f;

	f = (float)this->getRawBits() / (1 << this->_bits);
	return (f);
}

int	Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->_bits);
}

std::ostream& operator<<(std::ostream& o, Fixed const& rhs)
{
	o << rhs.toFloat();
	return (o);
}