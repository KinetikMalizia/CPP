/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:47:47 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/09 13:47:47 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

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
	delete this->_brain;
	std::cout << "Animal destructor called\n";
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << this->_type << ": ...Generic animal sound...\n";
}