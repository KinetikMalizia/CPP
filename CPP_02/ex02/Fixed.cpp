/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:47:16 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/16 13:47:16 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

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

int Fixed::operator>(Fixed const& rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (1);
	return(0);
}

/*Operators overlaod-----------------------------------*/

int Fixed::operator<(Fixed const& rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (1);
	return(0);
}

int Fixed::operator>=(Fixed const& rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (1);
	return(0);
}

int Fixed::operator<=(Fixed const& rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (1);
	return(0);
}

int Fixed::operator==(Fixed const& rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return (1);
	return(0);
}

int Fixed::operator!=(Fixed const& rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (1);
	return(0);
}

Fixed	Fixed::operator+(Fixed const& rhs) const
{
	Fixed ret(this->toFloat() + rhs.toFloat());

	return (ret);
}

Fixed	Fixed::operator-(Fixed const& rhs) const
{
	Fixed ret(this->toFloat() - rhs.toFloat());

	return (ret);
}

Fixed	Fixed::operator*(Fixed const& rhs) const
{
	Fixed ret(this->toFloat() * rhs.toFloat());

	return (ret);
}

Fixed	Fixed::operator/(Fixed const& rhs) const
{
	Fixed ret(this->toFloat() / rhs.toFloat());

	return (ret);
}

Fixed	&Fixed::operator++(void)
{
	this->_value += 1;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_value -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;

	this->_value += 1;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;

	this->_value += 1;
	return (temp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream& o, Fixed const& rhs)
{
	o << rhs.toFloat();
	return (o);
}