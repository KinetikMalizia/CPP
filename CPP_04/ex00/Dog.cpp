/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:48:02 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/09 14:46:15 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(Dog &og) : Animal(og.getType())
{
		this->_type = og.getType();
		std::cout << "Dog copy constructor called\n";
}

Dog::Dog() : Animal("Dog")
{
	this->_type = "Dog";
	std::cout << "Dog default constructor called\n";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

Dog	&Dog::operator=(Dog &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << this->_type << ": cute W0oF\n";
}