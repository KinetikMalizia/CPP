/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:45:57 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/16 13:45:57 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(Fixed& original)
{
	*this = original;
	std::cout << "Copy contructor called\n";
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

Fixed& Fixed::operator=(Fixed& rhs)
{
	setRawBits(rhs.getRawBits());
	std::cout << "Copy assignement operator called\n";
	return (*this);
}

int	Fixed::getRawBits(void)
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
