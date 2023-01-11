/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmalizia <fmalizia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:48:02 by fmalizia          #+#    #+#             */
/*   Updated: 2023/01/11 15:15:54 by fmalizia         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(Dog &og) : Animal(og.getType())
{
		this->_brain = new Brain(*og._brain);
		std::cout << "Dog copy constructor called\n";
}

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog default constructor called\n";
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called\n";
}

Dog	&Dog::operator=(Dog &rhs)
{
	this->_type = rhs._type;
	this->_brain = rhs._brain;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << this->_type << ": cute W0oF\n";
}

void	Dog::setIdea(int i, std::string val)
{
	this->_brain->setIdea(i, val);
}

std::string	Dog::getIdea(int i)
{
	return (this->_brain->getIdea(i));
}